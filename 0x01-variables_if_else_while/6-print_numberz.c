#include<stdio.h>
/**
 * main - Entry point of the program.
 * Description: This takes command line arguments and an exit status.
 * Return: 0 on successful, non-zero on error.
*/
int main(void)
{
	int g;

	g = 0;

	while
		(g < 10) {
			putchar(g + '0');
			g++;
		}
	putchar('\n');
	return (0);
}
