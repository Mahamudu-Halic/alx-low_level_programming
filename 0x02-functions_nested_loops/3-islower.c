#include "main.h"
/**
 *_islower - checks if alphabet is lowercase or not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
