#include "main.h"

/**
<<<<<<< HEAD
* rev_string - a function that reverses a string
*@s: number t
=======
* rev_string - reverses a string
*@s: string being reversed
*
*/

void rev_string(char *s)
{
	int i, x, y, c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	x = 0;
	y = i - 1;

	while (x < y)
	{
		c = s[x];
		s[x] = s[y];
		s[y] = c;
		x++;
		y--;
	}
}
>>>>>>> 9a0ee756ece4886d0eb8284f81d8cc91c92b2e42
