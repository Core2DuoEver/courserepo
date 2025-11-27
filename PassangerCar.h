#pragma once

#include <string>
#include <iostream>


class PassengerCar
{
private:
    std::string _name;
    bool _isRepaired = false;

public:
    void repair();

    bool get_is_repaired();

    PassengerCar(std::string name_in);

    friend std::ostream& operator<<(std::ostream& os, const PassengerCar& car);
};

