#include <stdio.h>

/**
 * main - program that prints either number or Fizz or Buzz or FizzBuzz
 *
 * Return: returns 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (((n % 3) || (n % 5)) == 0)
			printf("Number = %d FizzBuzz\n", n);


		else if ((n % 3) == 0)
			printf("Number = %d Fizz\n", n);
		else if ((n % 5) == 0)
			printf("Number = %d Buzz\n", n);
		else
			printf("Number = %d\n", n);

	}

	return (0);
}
