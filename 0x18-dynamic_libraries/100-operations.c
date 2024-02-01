#include "main.h"

/**
  *add - additon of int
  *@a: integer var 1 
  *@b: int var 2
  */ 
int add(int a, int b)
{
	return (a + b);
}

/**
  *sub - subtraction of int
  *@a: integer variable
  *@b: integer var 2
  *Return - return subtraction
  */
int sub(int a, int b)
{
	return (a - b);
}

/**
  *mul - Multiplicaton of int
  *@a: int variable 1 
  *@b: int variable 2
  *return - return multiplication
  */
int mul(int a, int b)
{
	return (a * b);
}

/**
  *div - Division of integers
  *@a: integer variable
  *@b: integer variable
  *Return - division
  */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero\n");
		return 0;  // Return some default value in case of error
	}
}

/**
  *mod - modulus of integers
  *@a: integer variable
  *@b: integer variable 2 
  *Return - solved problem 
  */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return 0;
	}
}
