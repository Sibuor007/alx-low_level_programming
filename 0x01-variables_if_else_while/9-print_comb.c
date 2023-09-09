#include<stdio.h>
/**
 * main - Entry point of the program.
 * Description: This takes command line arguments and an exit status.
 * Return: 0 on successful, non-zero on error.
*/
int main(void)
{
	int t;

	for (t = 0; t < 10; t++)
	{
		putchar(t + '0');
		if (t < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
