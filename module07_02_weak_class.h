#pragma once
#include "iostream"
#include "minmax.h"

class weak_class
{
private:
	std::weak_ptr<int[]> weak_arr;
	unsigned int size{};
public:
	weak_class(const std::shared_ptr<int[]> shared_arr, unsigned int size);

	int get_sum();
	minmax get_minmax();

	std::weak_ptr<int[]>& get_weak_arr();
	int get_size();

	void print_arr();
};

