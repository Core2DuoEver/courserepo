#include "book.h"
book::book(std::string title_in, std::string author_in, const char* isbn_in, short unsigned int year_in) {
	title = title_in;
	author = author_in;
	year = year_in;

	size_t length = strlen(isbn_in) + 1;
	isbn = new char[length];
	strcpy_s(isbn, length, isbn_in);
}
book::book(const book& copy_book){
	title = copy_book.title;
	author = copy_book.author;
	year = copy_book.year;

	size_t length = strlen(copy_book.isbn) + 1;
	isbn = new char[length];
	strcpy_s(isbn, length, copy_book.isbn);
}
book::~book() {
	delete[] isbn; 
	std::cout << "Destroyed! \n";
}
void book::printInfo() {
	std::cout << "Book: " << title << "\n";
	std::cout << "Author: " << author << "\n";
	std::cout << "Year: " << year << "\n";
	std::cout << "ISBN: " << isbn << "\n";
}