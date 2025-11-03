#include "iostream"
#include "module07_02_weak_class.h"
#include "minmax.h"

int main() {

	int n = 0;

	std::cin >> n;

	std::shared_ptr<int[]> arr_ptr = std::make_shared<int[]>(n);

	for (int i = 0; i < n; i++) {
		std::cin >> arr_ptr[i];
		std::cout << "\n";
	}

	weak_class weak_arr(arr_ptr, n);

	minmax mini_max;

	mini_max = weak_arr.get_minmax();

	std::cout << " " << mini_max.min << "Minimum" << mini_max.max << "\n";

	std::cout << weak_arr.get_sum() << "\n";

	weak_arr.print_arr();

	return(0);
}
