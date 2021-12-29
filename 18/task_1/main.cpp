#include <iostream>
#include <vector>

void new_swap(std::vector<int>&a,int *b);

int main() {


    std::vector<int> a{1,2,3,4};
    int b[]{2,4,6,8};

   new_swap(a,b);

    for (int i = 0; i < 4; ++i) std::cout<<a[i];
    std::cout<<std::endl;
    for (int i = 0; i < 4; ++i) std::cout<<b[i];


    return 0;
}

void new_swap(std::vector<int> &a, int *b) {
    int x=0;

    
}
