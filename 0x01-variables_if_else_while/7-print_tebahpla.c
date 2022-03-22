#include <stdio.h>
/**
 * main - prining alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
