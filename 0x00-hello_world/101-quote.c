#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	/* Message to print */
	char *message = "and that piece of art is useful\"  - Dora Korpar, 2015-10-19\n";
	/* Printing to standard error using fprintf */
	frpintf(stderr, "%s", message);
	return (1);
}

