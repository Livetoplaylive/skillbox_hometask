#include <iostream>

void swap(int* a,int* b){
    int *temp =new int;

    *temp=*a;
    *a=*b;
    *b=*temp;

    delete temp;
}

int main() {
    int a{10};
    int b{20};

    swap(&a,&b);
    std::cout<<"A:"<<a<<" B:"<<b;
    return 0;
}
