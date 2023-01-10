#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers.
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0, otherwise 1
 */
int main(int argc, char **argv)
{
	int i, add = 0;
	char *flag;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			strtol(argv[i], &flag, 10);
			if(*flag)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
