#include "main.h"
/**
 *str_concat - concatenates two strings.
 *@s1: first string
 *@s2: second string
 *Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
int s1Size = strlen(s1);
int s2Size = strlen(s2);
int i;

if (s1 == '\0')
s1 = "";
if (s2 == '\0')
s2 = "";
ptr = malloc(sizeof(char) * (s1Size + s2Size));
for (i = 0; i < s1Size; i++)
{
ptr[i] = s1[i];
}
for (i = 0; i < s2Size; i++, s1Size++)
{
ptr[s1Size] = s2[i];
}
return (ptr);
}
