#include <stdio.h>

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: Write a program to print the corresponding Celsius to Fahrenheit table.
 */

main(void)
{
	/**
	 * @Fah: Fahrenheit
	 * @Cel: Celsius
	 */
	float Fah, Cel;

	printf("Temprature Converter\n");       // Heading
	printf("====================\n");       // Underline	
	printf("Celsius to Fahrenheit\n");       // Heading
	printf("---------------------\n");       // Underline
	
	for (Cel = 0; Cel <= 300; Cel += 20) 	//for statement (read 1.3) and 'Cel += 20' = 'Cel = Cel + 20
	{
		Fah = ((5.0 * Cel) / 9.0) + 32;		//Convert to Celsius and save to Cel
		printf("%3.1f %6.1f\n", Cel, Fah);	// Print Result
	}

	return (0);
}
