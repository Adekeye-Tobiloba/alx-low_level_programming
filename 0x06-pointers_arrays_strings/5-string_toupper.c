#include "main.h"

/**
  * string_toupper -> converting to upper case
  * @x: string param
  * Return: string
  */

cha *string_toupper(cha *x)
{	
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
