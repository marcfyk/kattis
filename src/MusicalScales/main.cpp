#include <iostream>
#include <vector>
#include <set>

std::vector<std::string> scales{"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
std::vector<int> offsets{2, 2, 1, 2, 2, 2, 1};

int main() {
    int n;
    std::cin >> n;
    std::set<std::string> notes;
    for (int i = 0; i < n; ++i) {
        std::string note;
        std::cin >> note;
        notes.insert(note);
    }

    std::vector<int> indexes;

    for (int i = 0; i < scales.size(); ++i) {
        std::set<std::string> scale_major;
        int index = i;
        scale_major.insert(scales[i]);
        for (int offset : offsets) {
            index += offset;
            index %= scales.size();
            scale_major.insert(scales[index]);
        }

        bool all_found = true;
        for (std::string note : notes) {
            if (!scale_major.count(note)) {
                all_found = false;
                break;
            }
        }

        if (all_found) {
            indexes.push_back(i);
        }
    }

    std::string out;
    if (indexes.size()) {
        for (int index : indexes) {
            out += scales[index];
            out += ' ';
        }
    } else {
        out = "none";
    }

    std::cout << out;

    return 0;
}