#include <stdio.h>

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: Modify the temperature conversion program to print a heading above the table. 
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
	
	for (Fah = 0; Fah <= 300; Fah = Fah + 20) 	//for statement (read 1.3)
	{
		Cel = (5.0 / 9.0) * (Fah - 32);		//Convert to Celsius and save to Cel
		printf("%3.1f %6.1f\n", Fah, Cel);	// Print Result
	}

	return (0);
}
