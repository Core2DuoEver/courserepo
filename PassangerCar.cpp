#include "PassangerCar.h"
std::ostream& operator<<(std::ostream& os, const PassengerCar& car){

    std::string temp_car = car._name;

    if (car._isRepaired) {
        temp_car = temp_car + " | Fixed";
    }
    else {
        temp_car = temp_car + " | Broken";
    }

    os << temp_car;
    return os;
}
PassengerCar::PassengerCar(std::string name_in) {
    _name = name_in;
}
void PassengerCar::repair() {
    _isRepaired = true;
}

bool PassengerCar::get_is_repaired() {
    return _isRepaired;
}