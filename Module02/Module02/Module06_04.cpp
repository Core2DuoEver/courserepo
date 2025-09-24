#include <iostream>
#include <memory>
#include <algorithm>
#include <random>

#define min_numb 1
//Minimal number that can be scored during one round.
#define max_numb 100
//Max number that can be scored during one round.
#define arr_len 10

short int randnum() {

	// https://www.geeksforgeeks.org/cpp/how-to-generate-random-number-in-range-in-cpp/

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(min_numb, max_numb);

	return(distrib(gen));
}

int main() {
	
	std::unique_ptr<int[]> arr = std::make_unique<int[]>(arr_len);

	for (int i = 0; i < arr_len; i++) {
		arr[i] = randnum();
	}

	for (int i = 0; i < arr_len; i++) { 
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	int* minPtr = std::min_element(arr.get(), arr.get() + arr_len);
	int* maxPtr = std::max_element(arr.get(), arr.get() + arr_len);

	std::cout << *minPtr << std::endl;
	std::cout << *maxPtr << std::endl;

}