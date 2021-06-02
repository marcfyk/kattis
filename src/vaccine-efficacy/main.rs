use std::io;

#[derive(Debug)]
struct Strain {
    infection_rate_vaccinated: f64,
    infection_rate_control: f64,
}

impl Strain {

    fn efficacy(&self) -> f64 {
        let reduction = self.infection_rate_control - self.infection_rate_vaccinated;
        reduction / self.infection_rate_control
    }

    fn new(infection_rate_vaccinated: f64, infection_rate_control: f64) -> Strain {
        Strain { infection_rate_vaccinated, infection_rate_control }
    }
}

fn read_input() -> Vec<String> {

    let read_data = || -> String {
        let mut vaccinations = String::new();
        io::stdin()
            .read_line(&mut vaccinations)
            .expect("");
        vaccinations.trim()
            .to_string()
    };

    let mut n = String::new();
    io::stdin()
        .read_line(&mut n)
        .expect("");
    let n = n.trim()
        .parse::<u32>()
        .unwrap();
    (0..n).map(|_| read_data())
        .collect::<Vec<String>>()
}

fn calculate_ratios(group: &Vec<&&[u8]>) -> [f64; 3] {
    let (mut a, mut b, mut c) = (0, 0, 0);
    for bytes in group {
        if bytes[1] == b'Y' { a = a + 1; }
        if bytes[2] == b'Y' { b = b + 1; }
        if bytes[3] == b'Y' { c = c + 1; }
    }
    let ratio = |x: i32| -> f64 { x as f64 / group.len() as f64 };
    [ratio(a), ratio(b), ratio(c)]
}

fn evaluate_efficacy(efficacy: f64) -> String {
    if efficacy > 0.0 {
        format!("{:.6}", efficacy * 100.0)
    } else {
        String::from("Not Effective")
    }
}

fn main() {
    let input = read_input();
    let input_bytes = input.iter()
        .map(|string| string.as_bytes())
        .collect::<Vec<&[u8]>>();
    let control_group = input_bytes.iter()
        .filter(|bytes| bytes[0] == b'N')
        .collect::<Vec<&&[u8]>>();
    let vaccinated_group = input_bytes.iter()
        .filter(|bytes| bytes[0] == b'Y')
        .collect::<Vec<&&[u8]>>();
    let vaccinated_ratios = calculate_ratios(&vaccinated_group);
    let control_ratios = calculate_ratios(&control_group);
    let output = (0..3).map(|i| Strain::new(vaccinated_ratios[i], control_ratios[i]))
        .map(|strain| strain.efficacy())
        .map(evaluate_efficacy)
        .collect::<Vec<String>>()
        .join("\n");
    println!("{}", output);
}