#include<stdio.h>
/**
 * main - Entry point of the program.
 * Description: This takes command line arguments and an exit status.
 * Return: 0 on successful, non-zero on error.
*/
int main(void)
{
	char x;

	x = 'a';
	while
		(x <= 'z') {
			if ((x != 'q' && x != 'e') && x <= 'z')
				putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
