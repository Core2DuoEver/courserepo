#include <iostream>

int main() {
	int in_var;

//	std::cout << "Number pleaseee!";

	std::cin >> in_var;

	std::cout << "Standart IF/ELSE" << std::endl;

	//Standart way
	if ((in_var >= 0)&&((in_var % 10) == 0)) {
		int in_var_temp = in_var << 2;
		std::cout << in_var_temp;
	}
	else {
		int in_var_temp = in_var >> 2;
		std::cout << in_var_temp;
	}

	//Tern(?) way.

	std::cout << std::endl << "Tern output" << std::endl;

	int in_var_temp = ((in_var >= 0) && ((in_var % 10) == 0)) ? in_var << 2 : in_var >> 2;

	std::cout << in_var_temp;

}