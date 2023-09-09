#include<stdio.h>
/**
 * main - Entry point of the program.
 * Description: This takes command line arguments and an exit status.
 * Return: 0 on successful, non-zero on error.
*/
int main(void)
{
	int q;

	for (q = 0; q < 10; q++)
		printf("%d", q);
	putchar('\n');
	return (0);
}
