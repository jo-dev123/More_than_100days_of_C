#include <stdio.h>

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: Modify the temperature conversion program to print the table in reverse order,
 * that is, from 300 degrees to 0.
 * >> Reverse of Ex1-3 in Variables and Arithmetic Expressions
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
	
	for (Fah = 300; Fah >= 0; Fah -= 20) 	//for statement (read 1.3) and 'Fah -= 20' = 'Fah = Fah - 20
	{
		Cel = (5.0 / 9.0) * (Fah - 32); 	//Convert to Celsius and save to Cel
		printf("%3.1f %6.1f\n", Fah, Cel);	// Print Result
	}

	return (0);
}
