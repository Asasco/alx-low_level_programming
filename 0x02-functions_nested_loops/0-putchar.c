#include "holberton.h"

/**
 * main - a simple program that outputs "putchar"
 * Return: 0 on success
 */
int main(void)
{
		char str[] = "putchar\n";
		int i = 0;

		while (str[i] != '\0')
			_putchar(str[i++]);
		return (0);

}
