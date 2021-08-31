#include <iostream>
#include <vector>
constexpr int SIZE=4;
int main() {
    int m[SIZE][SIZE];
    std::vector<int> v(SIZE),r(SIZE);

    //m
    std::cout<<"Enter the matrix\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout<<"string "<<i<<"\n";
        for (int j = 0; j < SIZE; ++j) {
          std::cin>>m[i][j];
        }
        std::cout<<"\n";
    }
    //v
    std::cout<<"Enter the vector\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cin>>v[i];
    }
    //r
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            r[i]+=v[i]*m[i][j];
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        std::cout<<r[i]<<"\t";
    }


    return 0;
}
