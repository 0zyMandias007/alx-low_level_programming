#include <stdio.h>
/**
 * main - Printing values in acending order
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		if (i == 9)
			continue;
	putchar(',');
	putchar(' ');
	putchar('\n');

	return (0);
}
