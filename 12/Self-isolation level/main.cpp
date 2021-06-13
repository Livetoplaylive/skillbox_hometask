#include <iostream>

int main() {
    int home[5];
    int registered{},on_float{};
    float answer;

    std::cout<<"enter number registered humans ";
    std::cin>>registered;

    std::cout<<"\nenter number humans on float ";
    std::cin>>on_float;

    if (registered<=0||on_float<=0){
        std::cout<<"error";
        return 1;
    }
    for (int i = 0; i < 5; ++i) {
        home[i]=on_float;
    }
    on_float=0;
    for (int i = 0; i < 5; ++i) {
        on_float+=home[i];
    }

    answer=(on_float*100)/registered;
    std::cout<<answer;

    return 0;
}
