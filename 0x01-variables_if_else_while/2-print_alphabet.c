/*
 * 2-print_alphabet.c
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	putchar('\n')

	return (0);
}
