#include "main.h"

/**
 * print_times_table - prints out an arbitrary multiplication table between
 * 1 and 15
 *
 * @n: integer that defines dimensions for the table
 *
 * Return void
 */
void print_times_table(int n)
{
	char buffer[5] = ", ",
	int i, J, num;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			num = i * j;
			buffer[2] = num / 100 + 48;
			buffer[3] = num / 10 % 10 + 48;
			buffer[4] = num % 10 + 48;
			if (buffer[2] == '0')
				buffer[2] = ' ';
			if (buffer[3] == '0' && buffer[2] == ' ')
				buffer[3] = ' ';
			_printstr(buffer);
		}
		_putchar('\n');
	}
}
