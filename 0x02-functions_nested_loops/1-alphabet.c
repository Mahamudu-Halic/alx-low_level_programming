#include "main.h"
/**
 *main - Prints alphabets in lowercase
 *Return: Always 0.
*/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
void print_alphabet(void){
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
}

