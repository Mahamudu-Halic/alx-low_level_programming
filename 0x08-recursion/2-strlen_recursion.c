#include "main.h"
/**
 *_strlen_recursion - print length of string
 *@s: string to be read
 */
int _strlen_recursion(char *s)
{
if (*s != '\n')
{
return (1 + _strlen_recursion(s + 1));   
}
else
{
return 0;
}
}
