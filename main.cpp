#include "array.h";
#include <future>

int main() {
	array arr;

	arr.fill_random(1, 100);

	std::future<int> future_max = std::async(std::launch::async, &array::max, &arr);
	std::future<int> future_min = std::async(std::launch::async, &array::min, &arr);
	std::future<int> future_sum = std::async(std::launch::async, &array::sum, &arr);

	std::cout << "Max: " << future_max.get() << "\n";
	std::cout << "Min: " << future_min.get() << "\n";
	std::cout << "Sum: " << future_sum.get() << "\n";
}