/*
 *5-print_numbers.c
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	printf("\n");

	return (0);
}