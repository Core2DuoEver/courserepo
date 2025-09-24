#include <iostream>

//Length of the char word[]
#define length_word 100

void reverseString(char* str) {
	char reverse_word[length_word];

	int xo = 0;

	for (short int str_len = strlen(str)-1; str_len >= 0; str_len--) {
		reverse_word[xo] = str[str_len];
		xo++;
	}

	for (short int sx = 0;  sx <= strlen(str) - 1; sx++) {
		str[sx] = reverse_word[sx];
	}
}
int notmain() {
	char word[length_word];

	std::cin >> word;
	
	reverseString(word);

	std::cout << word;

	return(0);
}