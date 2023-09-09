#include<stdio.h>
/**
 * main - Entry point of the program.
 * Description: This takes command line arguments and an exit status.
 * Return: 0 on successful, non-zero on error.
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
