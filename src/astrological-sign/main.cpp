#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    std::string out;
    for (int i = 0; i < t; ++i) {
        int d;
        std::string m;
        std::cin >> d >> m;

        if ((m == "Mar" and d >= 21) or (m == "Apr" and d <= 20)) {
            out += "Aries";
        } else if ((m == "Apr" and d >= 21) or (m == "May" and d <= 20)) {
            out += "Taurus";
        } else if ((m == "May" and d >= 21) or (m == "Jun" and d <= 21)) {
            out += "Gemini";
        } else if ((m == "Jun" and d >= 22) or (m == "Jul" and d <= 22)) {
            out += "Cancer";
        } else if ((m == "Jul" and d >= 23) or (m == "Aug" and d <= 22)) {
            out += "Leo";
        } else if ((m == "Aug" and d >= 23) or (m == "Sep" and d <= 21)) {
            out += "Virgo";
        } else if ((m == "Sep" and d >= 22) or (m == "Oct" and d <= 22)) {
            out += "Libra";
        } else if ((m == "Oct" and d >= 23) or (m == "Nov" and d <= 22)) {
            out += "Scorpio";
        } else if ((m == "Nov" and d >= 23) or (m == "Dec" and d <= 21)) {
            out += "Sagittarius";
        } else if ((m == "Dec" and d >= 22) or (m == "Jan" and d <= 20)) {
            out += "Capricorn";
        } else if ((m == "Jan" and d >= 21) or (m == "Feb" and d <= 19)) {
            out += "Aquarius";
        } else if ((m == "Feb" and d >= 20) or (m == "Mar" and d <= 20)) {
            out += "Pisces";
        }

        out += '\n';
    }

    std::cout << out;

    return 0;
}