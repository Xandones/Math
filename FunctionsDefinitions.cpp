#include <iostream>
#include <cstdlib>
#include <math.h>
#include "FunctionsPrototypes.h"

int Sum(int Num1, int Num2)
{
	return Num1 + Num2;
}

int Subtraction(int Num1, int Num2)
{
	return Num1 - Num2;
}

int Multiplication(int Num1, int Num2)
{
	return Num1 * Num2;
}

int Division(int Num1, int Num2)
{
	if (Num2 == 0)
	{
		std::cout << "You cannot divide by zero!\n";
		exit(0);
	}
	else
	{
		return Num1 / Num2;
	}
}

void Potentiation(int Num1, int Num2)
{
	int Base = Num1;
	int Exp = Num2;
	long double Result = 1;

	while (Exp != 0)
	{
		Result *= Base;
		Exp--;
	}

	printf("%d to the power of %d is %f.\n", Base, Num2, Result);
}

void SquareRoot(int Num1, int Num2)
{
	printf("The square root of %d is %.3f and square root of %d is %.3f.\n", Num1, sqrt(Num1), Num2, sqrt(Num2));
}