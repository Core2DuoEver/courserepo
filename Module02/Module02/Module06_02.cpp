#include <iostream>


//2D array size.
#define x_len 3
#define y_len 3

int main() {

	int** double_array = new int*[x_len]; //Setting X

	for (int i = 0; i < x_len; i++) {
		double_array[i] = new int[y_len];
	}

	for (int i = 0; i < x_len; i++) {
		for (int j = 0; j < y_len; j++) {
			double_array[i][j] = j;

			std::cout << double_array[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < x_len; i++) {
		delete[] double_array[i]; //Deleting arrays 1
	}

	delete[] double_array; //Completely

	return -0;
}