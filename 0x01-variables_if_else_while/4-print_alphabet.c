#include <stdio.h>
/**
 * main - Printing alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter !=e || letter != f)
			putchar(letter);
}
