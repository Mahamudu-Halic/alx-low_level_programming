#include <stdio.h>
/**
 *main - print all arguments it receives.
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: always 0
 */
int main(int argc,char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
