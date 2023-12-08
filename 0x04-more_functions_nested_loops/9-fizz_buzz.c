#include <stdio.h>
/**
 * main -prints numbers from 1 to 100
 * Fizz - is printed for multiples of 3
 * Buzz - is printed for multiples of five
 * FizzBuzz - is printed for multiples of three and five
 * Return: 0 always
 */

int main(void)
{
	int num;

	for (num = 1; num <=100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		
			printf("FizzBuzz");
		
		else if ((num % 3) == 0)
		
			printf("Fizz");
		
		else if ((num % 5) == 0)
		
			printf("Buzz");
		else
			printf("%d", num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return 0;
}
