#pragma once

#include <string>
#include <iostream>

class CargoCar
{
private:
    std::string _name;
    bool _isRepaired = false;

public:
    void repair();

    bool get_is_repaired();

    CargoCar(std::string name_in);

    friend std::ostream& operator<<(std::ostream& os, const CargoCar& car);
};

