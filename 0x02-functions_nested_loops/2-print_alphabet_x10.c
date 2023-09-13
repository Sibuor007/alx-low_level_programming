#include"main.h"
/**
 * print_alphabet_x10 prints the alphabet in lowercase 10 times
 * it then followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int k;
	
	k = 0;
	while(k < 10)
	{
		ch = 'a';
		while(ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		ch = 'a';
		_putchar('\n');
		k++;
	}
}

