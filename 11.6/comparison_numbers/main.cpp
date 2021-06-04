#include <iostream>


long long translator(std::string);

long long translator(std::string, unsigned short);

long long retranslator(std:: string, unsigned short);
std::string comparison(std::string a, std::string b);

bool corrector(std::string);

int main() {
    std::string first_num;
    std::string second_num;

    //interface
    std::cout << "Enter first num: ";
    std::getline(std::cin, first_num);
    std::cout << "\nEnter second num: ";
    std::getline(std::cin, second_num);

    if (corrector(first_num) && corrector(second_num)) {
        std::cout << comparison(first_num, second_num);
    }

    return 0;
}

bool corrector(std::string a) {

    short point_counter{};

    for (int i = 0; i < a.length(); ++i) {
        if (point_counter > 1) {
            return false;
        }

        if (isdigit(a[i])) {
            continue;
        } else if (ispunct(a[i])) {
            if (a[i] == '.') {
                point_counter++;
            } else if (a[i] == '-') {
                if (i == 0) {
                    continue;
                } else {
                    return false;
                }
            }
        } else {
            return false;
        }
    }
    return true;
}

std::string comparison(std::string a, std::string b) {

    long long f_temp{},s_temp{};

    if (a.find_first_of('.') == std::string::npos) {
        f_temp = translator(a);
    } else {
        f_temp = translator(a, a.find_first_of('.'));
    }

    if (b.find_first_of('.') == std::string::npos) {
        s_temp = translator(b);
    } else {
        s_temp = translator(b, b.find_first_of('.'));
    }

    if (f_temp > s_temp) {
        return "More";

    } else if (s_temp > f_temp) {
        return "Less";
    }


    else {
        f_temp = s_temp = 0;
        if ((a.find_first_of('.') == std::string::npos) && (b.find_first_of('.') == std::string::npos)) {
            return "Equal";
        } else {
            if (a.find_first_of('.') != std::string::npos) {
                f_temp=retranslator(a,a.find_first_of('.'));
            }
            if (b.find_first_of('.') != std::string::npos) {
                s_temp=retranslator(b,b.find_first_of('.'));
            }
            if (f_temp > s_temp) {
                return "More";

            } else if (s_temp > f_temp) {
                return "Less";
            } else {
                return "Equal";
            }
        }
    }


}

long long translator(std::string a) {
    long long output{};
    if(a[0]=='-'){
        for (int i = 1; i < a.length(); ++i) {
            output += a[i] - '0';
            if (i == a.length() - 1) {
                continue;
            } else {
                output *= 10;
            }
        }
        return -output;
    }else {

        for (int i = 0; i < a.length(); ++i) {
            output += a[i] - '0';
            if (i == a.length() - 1) {
                continue;
            } else {
                output *= 10;
            }
        }
        return output;
    }

}

long long translator(std::string a, unsigned short pointer) {
    long long output{};

    pointer = a.find_first_of('.');

    if(a[0]=='-')
    {
        for (int i = 1; i < pointer; ++i) {
            output += a[i] - '0';
            if (i == pointer - 1) {
                continue;
            } else {
                output *= 10;
            }
        }

        return -output;
    }
    else {


        for (int i = 0; i < pointer; ++i) {
            output += a[i] - '0';
            if (i == pointer - 1) {
                continue;
            } else {
                output *= 10;
            }
        }

        return output;
    }
}

long long retranslator(std::string a,unsigned short pointer)
{
    long long output{};

    for(int i=a.length()-1;i>pointer;i--){
        output+=a[i]-'0';
        output*=10;
    }
    while(!(output%10)){
        output/=10;
    }
    return output;
}