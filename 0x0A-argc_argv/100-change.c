#include <stdio.h>
#include <stdlib.h>
/**
 *main - print change
 *@argc: argument number
 *@argc: argument
 *Return: 0, otherwise 1
 */
int main(int argc, char **argv)
{
	int count = 0, cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		count++;
		if (cent - 25 >= 0)
		{
			cent -= 25;
			continue;
		}
		if (cent - 10 >= 0)
		{
			cent -= 10;
			continue;
		}
		if (cent - 5 >= 0)
		{
			cent -= 5;
			continue;
		}
		if (cent - 2 >= 0)
		{	cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", count);
		return (0);
	}
