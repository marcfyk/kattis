use std::io;
use std::collections::HashSet;

#[derive(Debug)]
struct Log {
    action: String, 
    employee: String,
}

fn process_line() -> Log {
    let mut line = String::new();
    io::stdin().read_line(&mut line).expect("");
    let tokens: Vec<_> = line.split_whitespace().collect();
    Log {
        action: String::from(tokens[0]),
        employee: String::from(tokens[1]),
    }
}

fn handle_entry(log: &Log, logger: &mut HashSet<String>) -> String {
    let mut output = format!("{} entered", log.employee);
    if logger.contains(log.employee.as_str()) {
        output.push_str(" (ANOMALY)");
    }
    logger.insert(log.employee.to_owned());
    output
}

fn handle_exit(log: &Log, logger: &mut HashSet<String>) -> String {
    let mut output = format!("{} exited", log.employee);
    if !logger.contains(&log.employee) {
        output.push_str(" (ANOMALY)");
    }
    logger.remove(&log.employee);
    output
}

fn process_logs(logs: &Vec<Log>) -> Vec<String> {
    let mut logger: HashSet<String> = HashSet::new();
    let mut vector = Vec::new();

    for log in logs {
        match log.action.as_str() {
            "entry" => vector.push(handle_entry(&log, &mut logger)),
            "exit" => vector.push(handle_exit(&log, &mut logger)),
            _ => (),
        };
    }
    return vector;
}

fn main() {
    let mut n = String::new();
    io::stdin().read_line(&mut n).expect("");
    let n: u32 = n.trim().parse().unwrap();
    let logs: Vec<_> = (0..n).map(|_| process_line()).collect();
    let output = process_logs(&logs);
    println!("{}", output.join("\n"));
}