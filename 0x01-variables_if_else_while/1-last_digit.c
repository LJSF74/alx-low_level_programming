#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - default entry
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, n%10);
	} else if (l < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n%10);
	} else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0", n, n%10);
	}
	return (0);
}
