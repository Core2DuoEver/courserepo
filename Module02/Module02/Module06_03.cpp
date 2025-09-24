#include <vector>
#include <iostream>
#include <random>;

#define min_numb 1
//Minimal number that can be scored during one round.
#define max_numb 100
//Max number that can be scored during one round.
#define vec_lentgh 10
//Vec size

short int randnum() {

	// https://www.geeksforgeeks.org/cpp/how-to-generate-random-number-in-range-in-cpp/

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(min_numb, max_numb);

	return(distrib(gen));
}

bool comp(int a, int b) {
	return a < b;
}

int main() {

	std::vector<int> Std_Vec;

	for (int i = 0; i < vec_lentgh; i++ ) {
		Std_Vec.push_back(randnum());
	}
	std::cout << "UnSorted" << std::endl;

	for (int roar : Std_Vec) {
		std::cout << roar << std::endl;
	}
	std::cout << "Sorted" << std::endl;

	std::sort(Std_Vec.begin(), Std_Vec.end(),comp); //You didnt say how i should sort it ^^

	for(int roar : Std_Vec){
		std::cout << roar << std::endl;
	}

}