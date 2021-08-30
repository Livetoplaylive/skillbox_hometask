#include <iostream>
constexpr int SIZE=4;

void inputMatrix(int a[SIZE][SIZE]);
bool equal(int a[SIZE][SIZE],int b[SIZE][SIZE]);
int main() {
    int aMatrix[SIZE][SIZE]{},bMatrix[SIZE][SIZE]{};

    inputMatrix(aMatrix);
    inputMatrix(bMatrix);

    equal(aMatrix,bMatrix);

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

bool equal(int (*a)[4], int (*b)[4]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (a[i][j]!=b[i][j]){
                return false;
            }
        }
    }

    return true;
}
