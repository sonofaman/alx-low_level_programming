/*
 *4-print_alphabt.c
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 *        except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
			putchar(alp);
	}

	putchar('\n');

	return (0);
}
