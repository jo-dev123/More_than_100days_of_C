#include <stdio.h>

/**
 * main  - Entry Point
 * @void: no parameter
 *
 * Description: converts Fahrenheit to celsius
 */

void main(void)
{
	int cel, max, step, fah;

	max = 300;
	step = 20;

	for (fah = 0; fah <= max; fah += step)
	{
		cel = (5 * (fah - 32) / 9);

		printf("Fahrenheit is %d\tthen Celsius is %d\n", fah, cel);
	}
}
