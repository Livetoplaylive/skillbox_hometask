#include <iostream>

int main() {
    bool tiny[1];
    bool small[2];
    bool middle[3];
    bool big[4];

    std::cout<<"tiny="<<sizeof(tiny)/sizeof(tiny[0]);
    std::cout<<"\nsmall="<<sizeof(small)/sizeof(small[0]);
    std::cout<<"\nmiddle="<<sizeof(middle)/sizeof(middle[0]);
    std::cout<<"\nbig="<<sizeof(big)/sizeof(big[0]);

    return 0;
}
