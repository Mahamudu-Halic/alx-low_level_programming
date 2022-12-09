#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * Return: Always 0.
*/
int main(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
		putchar('\n');
	return (0);
}
