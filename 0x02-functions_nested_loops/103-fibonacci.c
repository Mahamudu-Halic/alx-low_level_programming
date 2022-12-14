#include <stdio.h>
/**
 *main - prints 50 fibonacci numbers starting with 1 or 2
 *Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long total, sumFib = 0, fib1 = 0, fib2 = 1;

	for (i = 0; i < 50; i++)
	{
		total = fib1 + fib2;
		fib1 = fib2;
		fib2 = total;
		if (total > 4000000)
			break;
		if (total % 2 == 0)
			sumFib += total;
	}
	printf("%lu", sumFib);
	printf("\n");
	return (0);
}
