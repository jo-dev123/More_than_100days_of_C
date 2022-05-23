#include <stdio.h>

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: Modify the temperature conversion program to print the table in reverse order, 
 * that is, from 300 degrees to 0.
 * >>Reverse Ex1-4
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
	
	for (Cel = 300; Cel >= 0; Cel -= 20) 	//for statement (read 1.3) and 'Cel -= 20' = 'Cel = Cel - 20
	{
		Fah = ((9.0 * Cel) / 5.0) + 32;		//Convert to Celsius and save to Cel
		printf("%3.1f %6.1f\n", Cel, Fah);	// Print Result
	}

	return (0);
}
