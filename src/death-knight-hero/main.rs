use std::io;

fn main() {
    let mut n = String::new();
    io::stdin().read_line(&mut n).expect("");
    let n = match n.trim().parse::<u32>() {
        Ok(i) => i,
        Err(_) => return
    };
    let mut data: Vec<String> = Vec::new();
    for _ in 0..n {
        let mut k = String::new();
        io::stdin().read_line(&mut k).expect("");
        data.push(k.trim().to_string());
    }

    let mut count = 0;
    for abilities in data {
        let bytes = abilities.as_bytes();
        let mut flag = true;
        for i in 1..bytes.len() {
            let prev = bytes[i - 1];
            let curr = bytes[i];
            if prev == b'C' && curr == b'D' {
                flag = false;
                break
            }
        }
        if flag {
            count += 1;
        }
    }
    println!("{}", count);
}
