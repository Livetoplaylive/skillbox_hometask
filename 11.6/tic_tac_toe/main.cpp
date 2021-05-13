#include <iostream>
const short SIZE=3;
bool correct_input(std::string);
char correct_field(char a[SIZE][SIZE]);
char win(char a[SIZE][SIZE]);

int main() {
    std::string input;
    char field[SIZE][SIZE];
    //user interface
    std::cout<<"Enter the field: ";
    for (int i = 0; i < SIZE; ++i) {
        std::getline(std::cin,input);
        for (int j = 0; j < SIZE; ++j) {
            if (correct_input(input)){
                field[i][j]=input[j];
            }
            else {
                std::cout<<"incorrect input";
                return 1;
            }
        }
    }
    if (correct_field(field)=='I')
    {
        std::cout<<"INCORRECT";
    }
    if(correct_field(field)!='I'){
        if(win(field)=='X'&& correct_field(field)=='X')
        {
            std::cout<<"Petya won.";
        }
        else if(win(field)=='O'&& correct_field(field)=='O')
        {
            std::cout<<"Vanya won";
        }
        else {
            switch (win(field)) {
                case 'i':
                    std::cout<<"INCORRECT";
                    break;
                case 'N':
                    std::cout<<"NOBODY";
                    break;
                default:
                    std::cout<<"INCORRECT";
                    break;
            }
        }
    }
    return 0;
}
bool correct_input(std::string a) {
    for (int i = 0; i < SIZE; ++i) {
        if (a[i]=='X'||a[i]=='O'||a[i]=='.'){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
char correct_field(char a[SIZE][SIZE])
{
    short counter_X{},counter_O{};
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (a[i][j]=='X'){
                counter_X++;
            }
            else if(a[i][j]=='O'){
                counter_O++;
            }
        }
    }
    if ((counter_X-counter_O)==1){
        return 'X';
    }
    else if ((counter_X-counter_O)==0){
        return 'O';
    }
    else{
        return 'I';
    }
}
char win(char a[SIZE][SIZE]){
    short coun_X{},coun_O{},win_X{},win_O{};
    //blue check
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if(a[i][j]=='X'){
                coun_X++;
            }
            else if(a[i][j]=='O'){
                coun_O++;
            }
            if(coun_X==3)
            {
                win_X++;
            }
            else if(coun_O==3){
                win_O++;
            }
        }
        coun_X=coun_O=0;
    }
    //red check
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if(a[j][i]=='X'){
                coun_X++;
            }
            else if(a[j][i]=='O'){
                coun_O++;
            }
            if(coun_X==3)
            {
                win_X++;
            }
            else if(coun_O==3){
                win_O++;
            }
        }
        coun_X=coun_O=0;
    }
    //green check
    for (int i = 0,j=0; i < SIZE,j < SIZE; ++i,++j) {
        if(a[j][i]=='X'){
            coun_X++;
        }
        else if(a[j][i]=='O'){
            coun_O++;
        }
        if(coun_X==3)
        {
            win_X++;
        }
        else if(coun_O==3){
            win_O++;
        }
    }
    for (int i = SIZE-1,j=0; i > 0,j<SIZE ; --i,++j) {
        coun_O=coun_X=0;
        if(a[j][i]=='X'){
            coun_X++;
        }
        else if(a[j][i]=='O'){
            coun_O++;
        }
        if(coun_X==3)
        {
            win_X++;
        }
        else if(coun_O==3){
            win_O++;
        }
    }
    if (win_O>0&&win_X>0)
    {
        return 'i';
    }

    if(win_X==1){
        return 'X';
    }
    else if(win_O==1){
        return 'O';
    }
    else{
        return 'N';
    }
}