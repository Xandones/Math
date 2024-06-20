#include <iostream>
#include "FunctionsPrototypes.h"

int main()
{
	long long int Num1, Num2;

	std::cout << "Type the first number: ";
	std::cin >> Num1;
	std::cout << "Type the second number: ";
	std::cin >> Num2;
	printf("%ld + %ld = %ld\n", Num1, Num2, Sum(Num1, Num2));
	printf("%ld - %ld = %ld\n", Num1, Num2, Subtraction(Num1, Num2));
	printf("%ld X %ld = %ld\n", Num1, Num2, Multiplication(Num1, Num2));
	printf("%ld / %ld = %ld\n", Num1, Num2, Division(Num1, Num2));
	printf("%ld ^ %ld = %ld\n", Num1, Num2, Potentiation(Num1, Num2));
	printf("The square root of %ld is %ld", SquareRoot(Num1));
	printf("The square root of %ld is %ld", SquareRoot(Num2));
}