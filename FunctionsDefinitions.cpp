#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>
#include "FunctionsPrototypes.h"

long long int Sum(long long int Num1, long long int Num2)
{
	return Num1 + Num2;
}

long long int Subtraction(long long int Num1, long long int Num2)
{
	return Num1 - Num2;
}

long long int Multiplication(long long int Num1, long long int Num2)
{
	return Num1 * Num2;
}

long long int Division(long long int Num1, long long int Num2)
{
	if (Num2 == 0)
	{
		std::cout << "You cannot divide by zero!\n";
		exit(0);
	}
	else
	{
		return ((long long int)Num1 / (long long int)Num2);
	}
}

long long int Potentiation(long long int Num1, long long int Num2)
{
	return pow((long long int)Num1, (long long int)Num2);
}

long long int SquareRoot(long long int Num1)
{
	return sqrt(Num1);
}