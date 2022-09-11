#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9.
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
					if (i == 55 && e == 56 && g == 57)
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
