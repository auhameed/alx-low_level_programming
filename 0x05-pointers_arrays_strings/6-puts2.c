#include "main.h"

/**
* puts2 - prints one char out of 2 of a string
*@str: char being printed
*/

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if ((a % 2) == 0)
<<<<<<< HEAD
			p`utchar(str[a]);
=======
			putchar(str[a]);
>>>>>>> 9a0ee756ece4886d0eb8284f81d8cc91c92b2e42
		a++;
	}
	putchar('\n');
}
