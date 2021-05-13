#include <iostream>


const std::string cor_symbols="!#$%&'*+-/=?^_`{|}~";

const short SIZE=64;

bool f_str_correct(std::string);
bool s_str_correct(std::string);
int main() {
    std::string input;
    std::string first_str;
    std::string second_str;
    short flag{};

    //user interface
    std::cout<<"Enter the address: ";
    std::getline(std::cin,input);

    for (int i = 0; i <input.length() ; ++i) {
        if (input[i]=='@'){
            flag=i;
        }
    }

    for (int i = 0; i < flag; ++i) {
        first_str.push_back(input[i]);
    }

    for (int i = flag; i < input.length(); ++i) {
        second_str.push_back(input[i]);
    }



    if(f_str_correct(first_str)&& s_str_correct(second_str)){
        std::cout<<"\nYEEEEES";
    }
    else{
        std::cout<<"\nNO";
    }



    return 0;
}

bool f_str_correct(std::string a) {

    if (a.size()>SIZE){
        return false;
    }

    if(a.find("..")!=std::string::npos){
        return false;
    }

    for (int i = 0; i < a.length(); ++i) {

        if (a[0]=='.'||a[a.length()-1]=='.'){
            return false;
        }
        if (isalnum(a[i])||a[i]=='.'||a[i]=='-'){
            continue;
        }
            //проверка на символы
        else if(ispunct(a[i])){
            if(cor_symbols.find_first_of(a[i])){
                continue;
            }
            else{
                return false;
            }

        }
        else{
            return false;
        }

    }
    return true;
}
bool s_str_correct(std::string a) {
    if (a.size()>SIZE){
        return false;
    }

    if(a.find("..")!=std::string::npos){
        return false;
    }

    for (int i = 1; i < a.length(); ++i) {

        if (a.length()-1=='.'){
            return false;
        }
        if (isalnum(a[i])||a[i]=='.'||a[i]=='-'){
            continue;
        }
        else{
            return false;
        }

    }
    return true;
}