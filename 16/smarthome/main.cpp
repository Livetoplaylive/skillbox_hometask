#include <iostream>
#include <sstream>
#include "smarthome.h"

bool stob(std::string);

int main(){
    smarthome home;
    std::string input;

    while(home.get_day()!=2){
        std::cout<<"HOME TEMPERATURE: OUTDOOR TEMPERATURE: OUTDOOR MOVEMENT: HOME LIGHT:\n";
        getline(std::cin,input);
        home.show_time();
        std::stringstream buffer(input);
        buffer>>home.home_temperature>>home.outdoor_temperature>>home.movement>>home.light;
        home.timeshift();
        home.get_switcher();
        home.set_time();
    }
    return 0;
}


