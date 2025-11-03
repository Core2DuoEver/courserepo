#include "Book.h"
#include <iostream>

int main() {
	book Book1("1984", "Owrell John", "123", 1992);
	Book1.printInfo();  //Create and PrintInfo work

	book Book3("Fun books", "Johnny", "ABC", 2007);
	book* ptrrr = new book(Book3);
	delete ptrrr;
	//Destructor work

	//Copy work
	book Book2(Book1);
	Book2.printInfo();

	std::cout << Book3.get_author() << " " << Book3.get_title() << " " << Book3.get_isbn() << " " << Book3.get_year() << "\n";
	//Getters work.



}