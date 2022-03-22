#include <stdio.h>
/**
 * main - printing 0-9 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numz;

	for (numz = 48; numz < 58; numz++)
	{
		putchar(numz);
	}
	putchar('\n');
	return (0);
}
