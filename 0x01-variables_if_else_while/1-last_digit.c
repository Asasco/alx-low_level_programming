#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks last digit
 *
 *Return: zero
 */
int main(void)
{

	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{

		printf("Last digit of %d is %d and is greater tha 5\n", n,
	} else if (l == 98)
	{
		printf("Last difit of %d id %d and is 0\n", n, l);

	} else if (l < 6 && l != 98)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (98)
}
