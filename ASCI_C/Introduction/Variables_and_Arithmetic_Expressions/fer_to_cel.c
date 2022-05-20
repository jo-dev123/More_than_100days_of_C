#include <stdio.h>

/**
 * main  - Entry Point
 * @void: no parameter
 *
 * Description: converts Fahrenheit to celsius
 */

void main(void)
{
	int max, step;
	float cel, fah;

	max = 300;
	step = 20;

	for (fah = 0; fah <= max; fah += step)
	{
		cel = (5.0 / 9.0) * (fah - 32);

		printf("Fahrenheit is %3.0f then Celsius is %6.2f\n", fah, cel);
	}
}
