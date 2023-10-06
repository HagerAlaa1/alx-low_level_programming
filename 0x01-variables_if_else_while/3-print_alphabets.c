#include <stdio.h>
/**
 * main - the main function
 * Return: 0
 */
int main(void)
{
	char letter;
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		for (letter = 'A'; letter <= 'Z'; letter++)
			putchar(letter);
		putchar('\n');
		return (0);
}
