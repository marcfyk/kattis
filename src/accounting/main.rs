use std::fmt;
use std::io;

#[derive(Debug)]
enum Event {
    Set { index: usize, value: u32 },
    Restart{ value: u32 },
    Print{ index: usize },
    Invalid,
}

impl Event {
    fn build(line: &str) -> Event {
        let tokens = line.split_whitespace()
            .collect::<Vec<_>>();
        return match tokens[0] {
            "SET" => Event::Set {
                index: tokens[1].parse::<usize>().unwrap() - 1, 
                value: tokens[2].parse::<u32>().unwrap()
            },
            "RESTART" => Event::Restart { value: tokens[1].parse::<u32>().unwrap() },
            "PRINT" => Event::Print { index: tokens[1].parse::<usize>().unwrap() - 1 },
            _ => Event::Invalid,
        };
    }
}

#[derive(Debug)]
struct Wealth {
    index: i32,
    value: i32,
}

impl Wealth {
    fn new(index: i32, value: i32) -> Wealth {
        Wealth { index, value }
    }
}

impl fmt::Display for Wealth {
    fn fmt(&self, fmt: &mut fmt::Formatter) -> fmt::Result {
        fmt.write_str(&self.value.to_string()).expect("");
        Ok(())
    }
}

fn read_input() -> (usize, Vec<Event>) {
    let mut line = String::new();
    let stdin = io::stdin();
    stdin.read_line(&mut line).expect("");
    let tokens = line.split_whitespace().collect::<Vec<_>>();
    let n = tokens[0].parse::<usize>().unwrap();
    let q = tokens[1].parse::<u32>().unwrap();

    let events = (0..q).map(|_| {
        let mut line = String::new();
        stdin.read_line(&mut line).expect("");
        Event::build(line.trim())
    }).collect::<Vec<Event>>();
    (n, events)
}

fn main() {
    let (n, events) = read_input();

    let mut w = Wealth::new(-1, 0);
    let mut economy = (0..n).map(|_| Wealth::new(0, 0)).collect::<Vec<_>>();
    events.iter()
        .enumerate()
        .for_each(|(idx, event)| {
            match event {
                Event::Set { index, value } => {
                    let i = *index as usize;
                    economy[i].index = idx as i32;
                    economy[i].value = *value as i32;
                },
                Event::Restart { value } => {
                    w.index = idx as i32;
                    w.value = *value as i32;
                },
                Event::Print { index } => {
                    let i = *index as usize;
                    if w.index < economy[i].index {
                        println!("{}", economy[i]);
                    } else {
                        println!("{}", w)
                    }
                },
                Event::Invalid => (),
            }
        });
}