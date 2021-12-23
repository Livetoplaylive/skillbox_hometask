#include <iostream>

void revert(int *a,int size);

int main() {

    int arr[10];
    for (int i = 0; i < sizeof(arr)/sizeof(int); ++i) {
        arr[i]=i;
    }

    revert(arr,10);

    for (int i = 0; i < 10; ++i) {
        std::cout<<arr[i];
    }

    return 0;
}

void revert(int *a,int size) {
    int *temp=new int;
    int* end= a + (size - 1);

    for (int i = 0; i < (size/2); ++i) {
        *temp=*a;
        *a=*end;
        *end=*temp;
        a++;
        end--;
    }

    delete temp;
}
