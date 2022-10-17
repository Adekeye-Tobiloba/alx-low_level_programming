#include <stdio.h>

/**
  * main - Entry point
  * Retun - Always 0 (success)
  */

int main(void)
{
	char c;
	int i;
	long int it;
	long long int lit;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lt));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llt));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
