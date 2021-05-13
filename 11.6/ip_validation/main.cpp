#include <iostream>

const unsigned char num_size = 255;

bool num_corrector(std::string);

int main() {
    std::string input;
    std::string temp_num;
    short point_counter{};

    // interface
    std::cout << "Enter the address";
    std::getline(std::cin, input);
    if (input.find("..") != std::string::npos) {
        std::cout<<"NO";
        return 1;
    }
    for (int i = 0; i < input.length(); ++i) {
        if (isdigit(input[i]) || input[i] == '.') {
            if (input[i] != '.') {
                temp_num.push_back(input[i]);
            }
            else if (input[i] == '.') {
                if (num_corrector(temp_num)) {
                    point_counter++;
                    temp_num = "";
                    if (point_counter<4){
                        std::cout<<"NO";
                        return 1;
                    }
                    continue;
                } else {
                    std::cout << "NO";
                    return 1;
                }
            }
            else {
                std::cout << "NO";
                return 1;
            }
        } else {
            std::cout << "NO";
            return 1;
        }
    }
    std::cout << "YES";
    return 0;
}

bool num_corrector(std::string a) {
    short x{};
    for (int i = 0; i < a.length(); ++i) {

        if (a[0] > '0') {
            x += a[i] - '0';
        }
        if (a[0] == '0') {
            if (a.length() > 1) {
                return false;
            }
        }
        while (i < a.length() - 1) {
            x *= 10;
            break;
        }

    }

    return (x <= num_size);
}