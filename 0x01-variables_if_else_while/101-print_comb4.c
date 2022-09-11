#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, g;

	i = 48;
	e = 48;
	g = 48;

	g = 48;
	while (g < 58)
	{
		e = 48;
		while (e < 58)
		{
			i = 48;
			while (i < 58)
			{
				if (g != i && g != e && i != g && g < i && g < e)
				{
					putchar(g);
					putchar(e);
					putchar(i);
					if (i == 57 && e == 56 && g == 55)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			e++;
		}
		g++;
	}
	putchar('\n');
	return (0);
}
