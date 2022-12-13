#include <stdio.h>
/**
 *main - Prints alphabets in lowercase
 *Return: Always 0.
*/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void){
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
}

