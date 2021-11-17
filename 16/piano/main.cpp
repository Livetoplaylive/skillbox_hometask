#include <iostream>
#include <string>

const int timer=12;

enum stave{
    A=1,B=2,C=4,D=8,E=16,F=32,G=64
};

int main(int argc,char*argv[]) {
    std::string buffer{}, output{};
    std::cout<<"let's play: ";
    getline(std::cin,buffer);
    stave note;
    int break_counter{};
    while(break_counter<timer) {
        for (char i: buffer) {

            if (i == ' ') {
                break_counter++;
                output+=' ';
                continue;
            }
            note = static_cast<stave>(1 << (i - 48));

            switch (note) {
                case A:
                    output += "Ля";
                    break;
                case B:
                    output += "Си";
                    break;
                case C:
                    output += "До";
                    break;
                case D:
                    output += "Ре";
                    break;
                case E:
                    output += "Ми";
                    break;
                case F:
                    output += "Фа";
                    break;
                case G:
                    output += "Соль";
                    break;
            }


        }
    }
    std::cout<<output;



    return 0;
}