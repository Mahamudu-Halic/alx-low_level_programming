#include "main.h"
/**
 *print_rev - prints string in reverse
 *@s: value to be entered
 */
void print_rev(char *s)
{
	int n = 0;
	int i;

	for (; *s++;)
		n++;

	for (i = n; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
