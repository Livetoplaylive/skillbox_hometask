#include <iostream>
constexpr int SIZE=4;
void inputMatrix(int a[SIZE][SIZE]);

int main() {
    int aMatrix[SIZE][SIZE];

    inputMatrix(aMatrix);
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if(i==j){
                continue;
            }
            else{
                aMatrix[i][j]=0;
            }
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout<<aMatrix[i][j]<<"\t";
        }
        std::cout<<"\n";
    }

    return 0;
}
void inputMatrix(int a[SIZE][SIZE]) {
    std::cout<<"Enter the matrix\n";

    for (int i = 0; i < SIZE; ++i) {
        std::cout<<"string "<<i<<"\n";
        for (int j = 0; j < SIZE; ++j) {
            std::cin>>a[i][j];
        }
        std::cout<<"\n";
    }


}

