#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

class Person {
public:
    std::string name;
    int priority;
    Person() : name(""), priority(-1) {}
    Person(std::string &name, int priority) : name(name), priority(priority) {}
};

int main() {
    int k;
    std::cin >> k;

    std::unordered_map<int, std::unordered_map<int, std::vector<Person>>> map;
    
    std::string name, date;
    int priority, day, month;
    for (int i = 0; i < k; ++i) {
        std::cin >> name >> priority >> date;
        int slash_index = date.find('/');
        day = std::stoi(date.substr(0, slash_index));
        month = std::stoi(date.substr(slash_index + 1));
        map[month][day].push_back(Person(name, priority));
    }

    std::vector<std::string> names;

    for (const auto &[month, data] : map) {
        for (const auto &[day, persons] : data) {
            int max_priority = -1;
            for (const Person &p : persons) {
                if (p.priority > max_priority) {
                    max_priority = p.priority;
                }
            }
            for (const Person &p : persons) {
                if (p.priority == max_priority) {
                    names.push_back(p.name);
                }
            }
        }
    }
    std::sort(names.begin(), names.end(), [](const std::string &n1, const std::string &n2) { return n1 < n2; });

    std::string out;
    out += std::to_string(names.size()) + '\n';
    for (const std::string &name : names) {
        out += name + '\n';
    }
    std::cout << out;

    return 0;
}