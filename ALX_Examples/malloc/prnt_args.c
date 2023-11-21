#include <stdio.h>
#include <stdlib.h>
/**
 * print_args_int - print the int value of int
 * @*a: pointer to int
 * @size: integer
 */

int print_args_int (int *a, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", a[i]);
	}
}

/**
 * main - accepts input,
 * 	  converts the to int 
 * 	  store them in a dynamic location
 * @argc: number of arguments + 1
 * @argv: array of arguments as string
 */

int main (int argc, char **argv)
{
	int *a;
	int arg_c;

	if (argc < 2)
	{
		printf("ENTER AT LEAST ONE ARGUMENT\n");
		return 1;
	}

	arg_c = argc - 1;
	a = malloc(arg_c * sizeof(int));
	for (int i = 0; i < arg_c; i++)
	{
		a[i] = atoi(argv[i + 1]);
	}

	print_args_int(a, arg_c);

	return 0;
}
