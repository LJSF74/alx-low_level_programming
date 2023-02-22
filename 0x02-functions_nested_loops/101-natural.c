#include <stdio.h>
/**
 * main - prints the sum of the multiples of the number in parameter
 * 
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1024 ; i >= 0 ; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	return (0);
}
