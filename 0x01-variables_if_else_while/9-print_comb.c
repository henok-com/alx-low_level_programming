#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int comb;

	for (comb = 48; comb <= 57; comb++)
	{
		if (comb != 57)
		{
			putchar(comb);
			putchar(',');
			putchar(' ');
		}
		else if (comb == 57)
		{
			putchar(comb);
		}
	}
	putchar('\n');
	return (0);
}
