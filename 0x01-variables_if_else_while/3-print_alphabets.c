#include <stdio.h>

/**
 * main - print the alphabet in lowercase and then in uppercase
 * Return: Always 0.
*/
int main(void)
{
	char uppercase;
	char lowercase;

	lowercase = 'a';
	uppercase = 'A';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
		putchar('\n');
	return (0);
}
