#include <stdio.h>
#include "main.h"

/**
 *main -  print_alphabet - prints the alphabet
 * Return: void
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
		putchar(i++);
	putchar('\n');
}
