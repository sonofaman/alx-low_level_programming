/*
 * 7-print_tebahpla.c
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *        Followed by new line.
 * Return: Always 0.
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);

	putchar('\n');

	return (0);
}
