#include <iostream>
#include <cmath>

int main(int argc, char*argv[]) {
    std::string buffer;
    double result{};
    buffer=argv[2];
    result= atof(argv[1]);
    result+= atof(argv[2])/pow(10,buffer.size());
    std::cout<<result;
    return 0;
}
