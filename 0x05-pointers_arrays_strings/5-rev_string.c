#include "main.h"
/**
 *rev_string - prints string in reverse
 *@s: value to be entered
 */
void rev_string(char *s)
{
	int n = 0;
	int i, j;

	while (s[n] != '\0')
		n++;
	j = n - 1;
	for (i = 0; i < j; i++)
	{
		s[i] = s[j];
		j--;
	}
}
