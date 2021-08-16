#include <iostream>

#include<algorithm>


int main() {
    const int SIZE=5;
    int arr[SIZE][SIZE]{};
    int counter{};
    int x{};
    bool switcher=true;


    for (int i = 0; i < SIZE; ) {

        while(!switcher){
            for (int j = SIZE-1; j >= 0; --j) {
                arr[i][j]=counter;
                counter++;
            }
            i++;
            switcher= true;
        }

        while(switcher){
            for (int j = 0; j < SIZE; ++j) {
                arr[i][j]=counter;
                counter++;
            }
            i++;
            switcher= false;
        }

    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout<<arr[i][j]<<"\t";
        }
        std::cout<<"\n";
    }

    return 0;
}
