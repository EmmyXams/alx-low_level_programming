#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if the number of characters is odd print n
 * ie. n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: haof of input string
*/

void puts_half(char *str)
{
	int a, n, length;

	length = 0;

	for (a = 0; str[a] != '\0'; a++)
		length++;
	n = (length / 2);
	if ((length % 2) == 1)
		n = ((length + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
