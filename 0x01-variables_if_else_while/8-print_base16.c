#include <stdio.h>
/**
 *main - print single digit numbers of base 10 starting from 0
 *Return: Always 0.
*/
int main(void)
{
	int i;
	char alphabet;

	alphabet = 'a';
	for (i = 0; i < 16; i++)
	{
		if (i >= 10)
		{
			putchar(alphabet);
			alphabet++;
		}
		else
		{
			putchar((i % 10) + '0');
		}
	}
	putchar('\n');
	return (0);
}
