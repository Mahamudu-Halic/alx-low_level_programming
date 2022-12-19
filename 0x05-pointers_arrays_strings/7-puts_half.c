#include "main.h"
/**
 * puts_half - print half of a string
 * @str: value to be inputed
 */
void puts_half(char *str)
{
	int n = 0;
	int i, j, strlen;

	while (str[n] != '\0')
		n++;
	if (strlen % 2 != 0)
		j = (strlen - 1) / 2;
	else 
		j = strlen / 2;
	strlen = n;
	for (i = j; i < strlen; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
