#include "iostream"

int weak_sum(const std::weak_ptr<int[]>& weak_arr, unsigned int size) {
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
int weak_min(const std::weak_ptr<int[]>& weak_arr, unsigned int size) {

}
int weak_max(const std::weak_ptr<int[]>& weak_arr, unsigned int size) {

}


int main() {

	int n = 0;

	std::cin >> n;

	std::shared_ptr<int[]> arr_ptr = std::make_shared<int[]>(n);

	for (int i = 0; i < n; i++) {
		std::cin >> arr_ptr[i];
		std::cout << "\n";
	}

	for (int i = 0; i < n; i++) {
		std::cout << arr_ptr[i];
	}

	return(0);
}