#include <iostream>
#include <cstdlib>
#include <cmath>
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

float Division(int Num1, int Num2)
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
	printf("%d to the power of %d is %ld.\n", Num1, Num2, pow(Num1, Num2));
}

void SquareRoot(int Num1, int Num2)
{
	printf("The square root of %d is %.3f and square root of %d is %.3f.\n", Num1, sqrt(Num1), Num2, sqrt(Num2));
}