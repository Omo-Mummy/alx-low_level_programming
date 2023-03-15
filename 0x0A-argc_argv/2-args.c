#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Counts arguments
 * @argv: Arguments
 *
 * Return:Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
