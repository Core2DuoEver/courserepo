#pragma once

#include <vector>
#include <random>
#include <iostream>

#include <mutex>

#define SIZE_OF_ARRAY 100

class array
{
private:
	std::vector<int> int_vec;

	mutable std::mutex array_mutex;
public:
	void fill_random(int down, int up);

	int sum();

	int max();

	int min();
};

