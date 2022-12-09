#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * Return: Always 0.
*/
int main(void)
{
	char alphabet;
	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
		putchar('\n');
	return 0;
}
