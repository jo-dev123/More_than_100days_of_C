#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Description: writes the arguments supplied to main on the program's standard output.
 */

int main (int argc, char **argv)
{
	while (argc--)
	{
		printf("%s", *(argv++));
	
	}

	exit(EXIT_SUCCESS);
}
