#pragma once
#include <iostream>
#include <string>

class book
{
private: 
	std::string title;
	std::string author;
	char* isbn;
	short unsigned int year;
public:

	book(std::string title_in, std::string author_in, const char* isbn_in, short unsigned int year_in);
	book(const book& copy_book);
	~book();

	std::string get_title() {
		return title;
	}
	std::string get_author() {
		return author;
	}
	const char* get_isbn() {
		return isbn;
	}
	int get_year() {
		return year;
	}

	void printInfo();

};

