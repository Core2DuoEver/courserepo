#include "CargoCar.h"
std::ostream& operator<<(std::ostream& os, const CargoCar& car) {

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
CargoCar::CargoCar(std::string name_in) {
    _name = name_in;
}
void CargoCar::repair() {
    _isRepaired = true;
}
bool CargoCar::get_is_repaired() {
    return _isRepaired;
}