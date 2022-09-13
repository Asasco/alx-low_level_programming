#include <stdio.h>

/**
 * print_alphabet - prints the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
		putchar(i++);
	putchar('\n');
}
