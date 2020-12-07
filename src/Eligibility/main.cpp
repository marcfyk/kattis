#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Contestant {
public:
    std::string name;
    int y1;
    int y2;
    int courses;
    Contestant(std::string &name, std::string &date1, std::string &date2, int courses);
};

Contestant::Contestant(std::string &name, std::string &date1, std::string &date2, int courses) {
    this->name = name;
    this->courses = courses;
    y1 = std::stoi(date1.substr(0, date1.find('/')));
    y2 = std::stoi(date2.substr(0, date2.find('/')));
}

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(1, '\n');
    std::vector<Contestant> contestants;

    for (int i = 0; i < n; ++i) {
        std::string line;
        std::getline(std::cin, line, '\n');
        std::stringstream ss(line);
        std::string name, date1, date2, courses;
        ss >> name >> date1 >> date2 >> courses;
        contestants.push_back(Contestant(name, date1, date2, std::stoi(courses)));
    }

    std::string out;
    for (const Contestant &c : contestants) {
        out += c.name + " ";
        if (c.y1 >= 2010 || c.y2 >= 1991) {
            out += "eligible";
        } else if (c.courses > 40) {
            out += "ineligible";
        } else {
            out += "coach petitions";
        }
        out += '\n';
    }

    std::cout << out;

    return 0;
}