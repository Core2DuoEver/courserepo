#include "module07_02_weak_class.h"
weak_class::weak_class(const std::shared_ptr<int[]> shared_arr, unsigned int size) {
	weak_arr = shared_arr;
}
int weak_class::get_sum() {
	if (auto shared_arr = weak_arr.lock()) { //Check.
		int sum = 0;
		for (int i = 0; i < size; ++i) {
			sum += shared_arr[i];
		}
		return sum;
	}
	else {
		return -1;
	}
}
minmax weak_class::get_minmax() {

	minmax to_return;

	if (size <= 0) {
		to_return.min = 0;
		to_return.max = 0;
		return to_return;
	}
	if (auto shared_arr = weak_arr.lock()) { //Check.
		to_return.min = shared_arr[0];
		to_return.max = shared_arr[0];
		for (int i = 1; i < size; ++i) {
			if (shared_arr[i] < to_return.min)  to_return.min = shared_arr[i];
			if (shared_arr[i] > to_return.max) to_return.max = shared_arr[i];
		}
		return to_return;
	}
	else {
		to_return.min = 0;
		to_return.max = 0;
		return to_return;
	}

}
std::weak_ptr<int[]>& weak_class::get_weak_arr() {
	return weak_arr;
}
int weak_class::get_size() {
	return size;
}
void weak_class::print_arr() {
		if (auto arr = weak_arr.lock()) {
			for (unsigned int i = 0; i < size; ++i) {
				std::cout << arr[i] << " ";
			}
			std::cout << "\n";
		}
}