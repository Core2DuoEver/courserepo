//Factorial

#define FLOAT

#include <iostream>


int main() {
#ifdef FLOAT
    float fact;
#endif // FLOAT
#ifdef INT
    int fact;
#endif // INT
    //Select N of factorial
    short int n = 5;

    fact = 1;
    for (int i = 2; i <= n; i++) {
        //Calculating the factorial
        fact = fact * i;
    }

    std::cout << fact;

}