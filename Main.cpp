#include <iostream>
#include "FunctionsPrototypes.h"

int main()
{
	int Num1, Num2;

	std::cout << "Type the first number: ";
	std::cin >> Num1;
	std::cout << "Type the second number: ";
	std::cin >> Num2;
	printf("%d + %d = %d\n", Num1, Num2, Sum(Num1, Num2));
	printf("%d - %d = %d\n", Num1, Num2, Subtraction(Num1, Num2));
	printf("%d X %d = %d\n", Num1, Num2, Multiplication(Num1, Num2));
	printf("%d / %d = %.3f\n", Num1, Num2, Division((float)Num1, (float)Num2));
	printf("%d ^ %d = %d\n", Num1, Num2, Potentiation(Num1, Num2));
	SquareRoot(Num1, Num2);
}