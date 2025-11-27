#pragma once
#include "Garage.h"

#define MAX_GARAGE_CAPACITY 5

template<typename T>
class ServiceStation
{
private:
	Garage<T> GarageInStation;
	int GarageCounter = 0; //CAN BE CHANGED TO VECTOR.SIZE. EXCESSIVE

	std::vector<T> _broken_garage_vector;
public:
	void AddCar(T car_to_add) {
		if (GarageCounter < MAX_GARAGE_CAPACITY) {
			_broken_garage_vector.push_back(car_to_add);
			GarageCounter++;
		}
		else {
			std::cout << "Error, more than 5 \n";
		}
	}
	void DisplayGarage() {
		GarageInStation.DisplayAll();
	}
	void DisplayBrokenGarage() {
		for (auto& temp_car_broken : _broken_garage_vector) {
			std::cout << temp_car_broken << "\n";
		}
		std::cout << "\n";
	}
	void RepairAll() {
		for (auto& temp_car : _broken_garage_vector) {
			temp_car.repair();
			GarageInStation.AddToGarage(temp_car);
		}
		_broken_garage_vector.clear();
		GarageCounter = 0;
	}

};

