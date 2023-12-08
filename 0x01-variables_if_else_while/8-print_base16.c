#include<stdio.h>
/**
 * main - Entry point of the program.
 * Description: This takes command line arguments and an exit status.
 * Return: 0 on successful, non-zero on error.
*/
int main(void)
{
	char h;

	int j;

	h = 'a';

	j = 0;

	while
		(j < 10) {
			putchar(j + '0');
			j++;
		}

	while
		(h <= 'f') {
			putchar(h);
			h++;
		}
	putchar('\n');
	return (0);
}
