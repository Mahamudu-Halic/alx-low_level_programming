#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints multiplication of two numbers
 *@argc: number of arguments and commands
 *@argv: array of arguments and commands
 *Return: 0, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc - 1 == 2)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);

		printf("%d\n", mul);

		return 0;
	}

	printf("ERROR\n");

	return 1;
}
