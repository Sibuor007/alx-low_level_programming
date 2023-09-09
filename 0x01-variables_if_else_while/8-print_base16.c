#include<stdio.h>
/**
 * main - Entry point of the program.
 * Description: This takes command line arguments and an exit status.
 * Return: 0 on successful, non-zero on error.
*/
int main(void)
{
	char h;

	h = '0';

	while
		(h <= 9) {
			putchar(h);
			h++;
		}
	h = 'a';

	while
		(h <= 'f') {
			putchar(h);
			h++;
		}
	putchar('\n');
	return (0);
}
