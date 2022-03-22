#include <stdio.h>
/**
 * main - printing 0-9 & a-f
 *
 * Return: Always 0  (Success)
 */
int main(void)
{
	int b16;

	for (b16 = 48; b16 <= 57; b16++)
	{
		putchar(b16);
	}
	for (b16 = 'a'; b16 <= 'f'; b16++)
	{
		putchar(b16);
	}
	putchar('\n');
	return (0);
}
