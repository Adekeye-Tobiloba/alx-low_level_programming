#include "main.h"

/**
  * print_alphabet_x10 - print 10 times the alphabet
  */

void print_alphabet_x10(void)
{
	in count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_puchar(letter);
		_putchar('\n');
	}
}


