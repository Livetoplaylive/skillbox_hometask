#ifndef SMARTHOME_SMARTHOME_H
#define SMARTHOME_SMARTHOME_H
#include <string>

bool stob(std::string a) {
    return a=="yes"||a=="on";
}

class time{
protected:
    int day;
    int hour;
public:
        void show_time(){
            std::cout << "Day:" << day << " hour:" << hour << ":00\n";
        }
        int get_day(){
            return day;
        }
        void set_time(){
            hour++;
            if (hour>23){
                day++;
                hour=0;
            }
        }
        time(){
            day=0;
            hour=0;
        }
};
class smarthome:public time
        {
private:

    std::string x[7]{"HOME_VOLTAGE",
                     "SOCKETS",
                     "HOME_LIGHT",
                     "OUTDOOR_LIGHT",
                     "HOME_HEATING",
                     "HEATING_SUPPLY",
                     "CONDITIONER"};

    enum switcher{
        HOME_VOLTAGE=1,
        SOCKETS=2,
        HOME_LIGHT=4,
        OUTDOOR_LIGHT=8,
        HOME_HEATING=16,
        HEATING_SUPPLY=32,
        CONDITIONER=64
    };
    int state;
    int temperature_color;
    bool outdoor_movement,home_light;

    void set_home_temperature();
    void set_outdoor_temperature();
    void set_outdoor_movement();
    void set_outdoor_light();
    void set_home_light();


public:
    double home_temperature,outdoor_temperature;
    std::string movement,light;

    void timeshift();
    void get_switcher() const;
    smarthome();
};

void smarthome::set_home_temperature() {
    if (home_temperature<22){
        state|=HOME_HEATING;
    }else if(home_temperature>25){
        state&=~HOME_HEATING;
    }

    if(home_temperature>=30){
        state|=CONDITIONER;
    }
    else if(home_temperature==25){
        state&=~CONDITIONER;
    }

}

void smarthome::set_outdoor_temperature() {
    if(outdoor_temperature<0){
        state|=HEATING_SUPPLY;
    } else if(outdoor_temperature>5){
        state&=~HEATING_SUPPLY;
    }
}

void smarthome::set_outdoor_movement() {
    outdoor_movement=stob(movement);
}

void smarthome::set_outdoor_light() {
    if(outdoor_movement&&(hour>16||hour<5)){
        state|=OUTDOOR_LIGHT;
    }else{
        state&=~OUTDOOR_LIGHT;
    }

}

void smarthome::set_home_light() {
    home_light= stob(light);
    if (home_light){
        state|=HOME_LIGHT;
    }
    else{
        state&=~HOME_LIGHT;
    }

    if (hour>=16&&hour<=20){
        temperature_color=temperature_color-575;
    }else if(hour==0){
        temperature_color=5000;
    }
}

void smarthome::timeshift() {
    set_home_temperature();
    set_outdoor_temperature();
    set_outdoor_movement();
    set_outdoor_light();
    set_home_light();
}

void smarthome::get_switcher() const {
    for (int i = 0; i < 7; ++i) {
        std::cout << x[i];
        if(state&(1<<i)){
            std::cout<<"-YES\n";
            if (i==2){
                std::cout<<"TEMPERATURE COLOR="<<temperature_color<<"K\n";
            }
        }
        else{
            std::cout<<"-NO\n";
        }
    }
}

smarthome::smarthome() {
    state=0;
    home_temperature=0;
    outdoor_temperature=0;
    temperature_color=5000;
    outdoor_movement=false;
    home_light= false;
    state|=HOME_VOLTAGE;
}
#endif //SMARTHOME_SMARTHOME_H
