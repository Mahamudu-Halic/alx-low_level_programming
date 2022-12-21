#include "main.h"
/**
 *cap_string - capitalize all words of a string
 *@a: string
 *Return: capitalized string
 */
char *cap_string(char *a)
{
	int i, counter = 1;
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == ',' || a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
		{
			counter = 1;
		}
		else if (counter == 1)
		{
			a[i] = toupper(a[i]);
			counter = 0;
		}
	}
	return (a);
}
