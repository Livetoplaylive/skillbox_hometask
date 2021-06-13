#include <iostream>

int main() {
    int average_building{};
    bool tower[10];
    bool police[2];
    bool bank[7];
    average_building=((sizeof(tower)/sizeof(tower[0]))+
            (sizeof(police)/sizeof(police[0]))+
            (sizeof(bank)/sizeof(bank[0])))/3;
    std::cout<<"average storeys of the quarter="<<average_building;

    return 0;
}
