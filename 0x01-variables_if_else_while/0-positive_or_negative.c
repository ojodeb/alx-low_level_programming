int main()
{
	int n;

	srand(time(NULL));

	n = rand();

	printf("The number is %d", n);

	if (n > 0)
	{ printf("is positive\n"); }

	else if (n == 0)
	{ printf("is zero\n") }
	else 
	{ printf("is negative\n") }

	return (0);
}
