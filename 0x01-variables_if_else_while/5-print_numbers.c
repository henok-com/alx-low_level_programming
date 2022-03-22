#include <stdio.h>
/**
 * main - printing from 0 to 10 using loops
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;
	
	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}
	printf("\n");
	return (0);
}
