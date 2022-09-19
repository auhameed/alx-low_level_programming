#include "main.h"
#include <stdio.h>
<<<<<<< HEAD
=======

>>>>>>> bbbd8da473f50541ae4a0ab48a758a94e425e6f4
/**
* _puts - prints a string
*@str: string being printed
* Return: Always 0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
