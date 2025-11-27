#pragma once

#include <vector>
#include <iostream>

template<typename T>
class Garage
{
private:
	std::vector<T> _garage_vector;
public:
	std::vector<T>& GetGarageVector() {
		return _garage_vector;
	}
	void AddToGarage(const T& type_in) {
		_garage_vector.push_back(type_in);
	}
	void DisplayAll() {
		for (auto& templ_temp : _garage_vector) {
			std::cout << templ_temp << "\n";
		}
		std::cout << "\n";
	}
	/*
	void DisplayFixed() {
		for (auto& templ_temp : _garage_vector) {
			if (templ_temp.get_is_repaired()) {
				std::cout << templ_temp << "\n";
			}
		}
	}
	*/
};

