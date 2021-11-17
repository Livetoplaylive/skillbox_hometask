#include <iostream>
#include <sstream>

int main(int argc, char *argv[]) {
    std::stringstream buffer{*(++argv)};
    double fvalue{},svalue{},result{};
    char temp{};
    buffer >> fvalue>>temp>>svalue;

    switch (temp) {
        case '+':
            result=fvalue+svalue;
            break;
        case '-':
            result=fvalue-svalue;
            break;
        case '*':
            result=fvalue*svalue;
            break;
        case '/':
            //
            if(svalue==0){
                std::cout<<"you really do this?!";
                return 1;
            }
            else{
                result=fvalue/svalue;
            }
            break;
    }

    std::cout<<fvalue<<" "<<temp<<" "<<svalue;
    std::cout<<"\n"<<result;
    return 0;
}
