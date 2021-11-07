#include <iostream>
#include <iomanip>

constexpr float epsilon = 0.01f;

inline bool equal(float value) {
    float minimal=0.0f;
    float maximum=150.0f;
    return (value <= maximum - epsilon) && (value >= minimal + epsilon);
};

int main() {
    std::stringstream output{};
    float speed{0.0f}, delta_speed{0.0f};
    output<<std::setprecision(3);
    std::cout<<"delta: ";
    std::cin>>delta_speed;
    speed+=delta_speed;
    while(equal(speed)){
        output<<"speed: "<<speed<<"km/h";
        std::cout<<output.str()<<std::endl;
        output.str("");
        output.clear();
        std::cout<<"delta: ";
        std::cin>>delta_speed;
        speed+=delta_speed;
    }
    std::cout << "\nstop";
    return 0;
}

