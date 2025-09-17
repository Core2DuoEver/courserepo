
#define MULT 9
#include <iostream>

void ForMult() {

	for (int X1 = 1; X1 <= MULT; X1++ ) {
		std::cout << X1 << " : ";
		for (int Y1 = 1; Y1 <= MULT; Y1++) {
			std::cout << X1 * Y1 << "; ";
		}
		std::cout << std::endl;
	}

}
void WhileMult() {
	int X1 = 1;
	int Y1 = 1;

	while (X1 <= MULT) {
		std::cout << X1 << " : ";
		while (Y1 <= MULT) {
			std::cout << X1 * Y1 << "; ";
			Y1++;
		}
		std::cout << std::endl;
		Y1 = 1;
		X1++;
	}


}
void DoWhileMult() {
	int X1 = 1;
	int Y1 = 1;

	do {
		std::cout << X1 << " : ";
		do {
			std::cout << X1 * Y1 << "; ";
			Y1++;
		} while (Y1 <= MULT);
		std::cout << std::endl;
		Y1 = 1;
		X1++;
	} while (X1 <= MULT);

}
void GotoMult() { //Bonus!

	int X1 = 1;
	int Y1 = 1;

	X1TO:
	if (X1 <= MULT) {

		std::cout << X1 << " : ";

		Y1TO:
		if (Y1 <= MULT) {

			std::cout << X1 * Y1 << "; ";

			Y1++;
			goto Y1TO;
		}

		std::cout << std::endl;


		Y1 = 1;
		X1++;
		goto X1TO;
	}


}

void notmain() {
	std::cout << "For loop" << std::endl;
	ForMult();
	std::cout << "While loop" << std::endl;
	WhileMult();
	std::cout << "Do While loop" << std::endl;
	DoWhileMult();
	std::cout << "GOTO Bonus loop" << std::endl;
	GotoMult();
}
