#include <iostream>
#include <string>

int main(int argc, char*argv[]) {
    std::string buffer{};
    double result{};

    buffer=argv[1];
    buffer+='.';
    buffer+=argv[2];

    result=stof(buffer);
    std::cout<<result;
    return 0;
}
