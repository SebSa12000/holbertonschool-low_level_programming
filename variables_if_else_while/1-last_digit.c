#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Test > 5 or 0
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, n % 10);
	if ((n % 10) > 5)
		printf("and is greater than 5\n");
	else if ((n % 10) == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
