#include "main.h"

/**
* swap_int - swaps the value of the integers
*@a: number being swapped
*@b: number being swappped
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	a = b;
	*b = c;
}
