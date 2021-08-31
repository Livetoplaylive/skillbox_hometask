#include <iostream>

class navel{
private:
    int count;

public:
    bool field[12][12];

    void show(){
        for (int i = 0; i < 12; ++i) {
            for (int j = 0; j < 12; ++j) {
                if (field[i][j]){
                    std::cout<<'o'<<"\t";
                }
                else{
                    std::cout<<'x'<<"\t";
                }
            }
            std::cout<<"\n";
        }
    }
    void burst(int a,int b);
    bool isTrue(){
        while(count!=144){
            return true;
        }
        return false;
    }


    navel();
};
navel::navel(){
    count=0;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            field[i][j]=true;
        }
    }
}

void navel::burst(int a, int b) {
    if(a>12||b>12){
        std::cout<<"oops";
        return;
    }
    if(field[a][b]){
        field[a][b]= false;
        std::cout<<"\nPop!\n";
        count++;
    }
    else{
        std::cout<<"nothing to burst\n";
    }

};


int main() {
    navel a;
    int string{};
    int post{};

    while(a.isTrue()){
        std::cout<<"lock at the field )\n";
        a.show();
        std::cout<<"choose a pimple";
        std::cin>>string>>post;
        a.burst(string,post);
    }
    return 0;
}
