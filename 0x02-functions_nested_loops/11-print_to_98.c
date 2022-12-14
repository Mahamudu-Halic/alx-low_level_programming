#include "main.h"
/**
 *print_to_98 - print all natural numbers from n to 98
 *@n: integer to be computered
*/
void print_to_98(int n)
{
	int mNum;

	for (int i = n; i <= 98; i++)
	{
		if (i == 98)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
			
	}
	
	if (n > 98)
	{
		for (int i = n; i >= 98; i--)
		{
			mNum = i / 10;

			if (i == 98)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else if (i > 99)
			{
				_putchar(i / 100 + '0');
				_putchar(mNum % 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
