#include<stdio.h>
/**
 * main - Entry point of the program.
 * Description: This takes command line arguments and an exit status.
 * Return: 0 on successful, non-zero on error.
*/
int main(void)
{
	char k;

	k = 'z';

	while
		(k >= 'a') {
			putchar(k);
			k--;
		}
	putchar('\n');
	return (0);
}
