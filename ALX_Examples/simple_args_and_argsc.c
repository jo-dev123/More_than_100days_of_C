#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Description: writes the arguments and counts supplied to main on the program's standard output.
 */

int main (int argc, char **argv)
{
	printf("The execuuted program is: %s\n", argv[0]);

	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
		}
	}

	exit(EXIT_SUCCESS);
}
