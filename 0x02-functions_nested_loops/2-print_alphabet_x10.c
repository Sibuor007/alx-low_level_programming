#include"main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * Description: This function prints the lowercase alphabet 10 times,
 * separated by newlines
 */

void print_alphabet_x10(void)
{
	char ch;
	int k;

	k = 0;
	while (k < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		ch = 'a';
		_putchar('\n');
		k++;
	}
}

