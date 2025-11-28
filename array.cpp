#include "array.h"
int random(int down_var, int up_var) { // https://www.geeksforgeeks.org/cpp/how-to-generate-random-number-in-range-in-cpp/
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(down_var, up_var);

	short int random_number = distrib(gen);

	return (random_number);
}
void array::fill_random(int down, int up) {
	for (int i = 0; i < SIZE_OF_ARRAY; i++) {
		int_vec.push_back(random(down,up));
	}
}

int array::max() {
	std::lock_guard<std::mutex> lock(array_mutex);

	int temp_max = int_vec[0];

	for (int temp_vec_int : int_vec) {
		if (temp_vec_int > temp_max) {
			temp_max = temp_vec_int;
		}
	}

	return temp_max;
}

int array::min() {
	std::lock_guard<std::mutex> lock(array_mutex);

	int temp_min = int_vec[0];

	for (int temp_vec_int : int_vec) {
		if (temp_vec_int < temp_min) {
			temp_min = temp_vec_int;
		}
	}

	return temp_min;
}

int array::sum() {
	std::lock_guard<std::mutex> lock(array_mutex);

	int temp_sum = 0;

	for (int temp_vec_int : int_vec) {
		temp_sum += temp_vec_int;
	}	

	return temp_sum;

}