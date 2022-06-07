/*
 *2-print_alphabet_x10.c
 */
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *                      followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	int count = 1;
	char alp;

	while (count++ <= 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
