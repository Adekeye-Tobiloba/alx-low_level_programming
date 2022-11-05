#include <stdio.h>

/**
   * main -> function to be called
   * @argc: argc parameter
   * @argv: an array of a command listed
   * Return: 0 for success
   */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}
	return (0);
}
