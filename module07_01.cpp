#include "iostream"

#define array_size 10
 
int notmain() {

	std::unique_ptr<int[]> arr_ptr = std::make_unique<int[]>(array_size);

	for (int i = 0; i < array_size; i++) {
		std::cin >> arr_ptr[i];
		std::cout << "\n";
	}

	std::cout << "\n";

	for (int i = 0; i < array_size; i++) {
		std::cout << arr_ptr[i];
	}

	return(0);
}