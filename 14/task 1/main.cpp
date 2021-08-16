#include <iostream>

struct person{
    int knife{1},
    fork{1},
    spoon{1},
    dessert_spoon{},
    plate{2},
    chair{1};

    void show(){
        std::cout<<"knife "<<knife<<std::endl;
        std::cout<<"fork "<<fork<<std::endl;
        std::cout<<"spoon "<<spoon<<std::endl;
        std::cout<<"desert spoon "<<dessert_spoon<<std::endl;
        std::cout<<"plate "<<plate<<std::endl;
        std::cout<<"chair "<<chair<<std::endl;
    };

};



int main() {
    person table[2][6];
    int person{1};

    //vip per
    table[0][0].plate++;
    table[1][0].plate++;
    table[0][0].dessert_spoon=1;
    table[1][0].dessert_spoon=1;
    //
    table[0][4].chair++;
    table[1][2].spoon--;
    table[0][0].spoon--;
    table[1][2].spoon++;
    table[1][2].plate--;

    //show it
    for (int i = 0; i < 2; ++i) {

        for (int j = 0; j < 6; ++j) {
            std::cout<<"person "<<person<<std::endl;
            table[i][j].show();
            person++;
            std::cout<<"\n\n";
        }


    }


    return 0;
}
