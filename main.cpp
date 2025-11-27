#include "array.h";
#include <future>

int main() {
	array arr;

	arr.fill_random(1, 100);

	std::future<int> future_max = std::async(std::launch::async, &array::max, &arr);
	std::future<int> future_min = std::async(std::launch::async, &array::min, &arr);
	std::future<int> future_sum = std::async(std::launch::async, &array::sum, &arr);

	int int_future_max = future_max.get();
	int int_future_min = future_min.get();
	int int_future_sum = future_sum.get(); //This one needs to be done for everyone to pass

	std::cout << "Max: " << int_future_max << "\n";
	std::cout << "Min: " << int_future_min << "\n";
	std::cout << "Sum: " << int_future_min << "\n";
}
