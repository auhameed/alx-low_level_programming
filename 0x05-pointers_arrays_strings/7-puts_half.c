#include "main.h"

/**
* puts_half - prints the second half of a string
* @str: string to print
* Return: void
*/

void puts_half(char *str)
{
	int ct, even, neg;

	for (ct = 0; str[ct] != '\0'; ct++)
		;
	if ((ct % 2) == 0)
	{
		for (even = ct / 2; str[even] != '\0'; even++)
			putchar(str[even]);
	}
	else
	{
		for (neg = (ct - 1) / 2; str[neg] != '\0'; neg++)
			putchar(str[neg + 1]);
	}
	putchar('\n');
}
