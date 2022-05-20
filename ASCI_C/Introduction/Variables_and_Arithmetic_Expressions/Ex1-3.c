#include <stdio.h>

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: Write a program to print the corresponding Celsius to Fahrenheit table.
 */

int main(void)
{
	/**
	 * @Fah: Fahrenheit
	 * @Cel: Celsius
	 */
	float Fah, Cel;

	printf("Temprature Converter\n");       // Heading
	printf("====================\n");       // Underline	
	printf("Fahrenheit to Celsius\n");       // Heading
	printf("---------------------\n");       // Underline
	
	for (Fah = 0; Fah <= 300; Fah += 20) 	//for statement (read 1.3) and 'Cel += 20' = 'Cel = Cel + 20
	{
		Cel = (5.0 / 9.0) + (Fah - 32);	//Convert to Celsius and save to Cel
		printf("%3.1f %6.1f\n", Fah, Cel);	// Print Result
	}

	return (0);
}
