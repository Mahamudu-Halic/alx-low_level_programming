#include "main.h"

/**
 * squareRoot - returns the natural square root of a number.
 * @number: input number.
 * @i: iterator.
 * Return: square root or -1.
 */
int squareRoot(int number, int i)
{
if (i <= number)
{
if (i * i == number)
return (i);
else
return (squareRoot(number, i + 1));
}
return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
return (squareRoot(n, 1));
}
