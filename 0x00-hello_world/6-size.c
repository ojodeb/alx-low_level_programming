#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the sizes of various data types on the machine it is
 *              compiled and run on.
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Sizeofchar:%zubyte(s)\n", sizeof(char));
	printf("Sizeofint:%zubyte(s)\n", sizeof(int));
	printf("Sizeoffloat:%zubyte(s)\n", sizeof(float));
	printf("Sizeofdouble:%zubyte(s)\n", sizeof(double));
	printf("Sizeoflong:%zubyte(s)\n", sizeof(long));
	printf("Sizeoflonglong:%zubyte(s)\n", sizeof(long long));
	printf("Sizeofpointer:%zubyte(s)\n", sizeof(void *));
	return (0);
}

