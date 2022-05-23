#include "stdio.h"

#define MIN 0 	// initial START is the symbolic name/constant
#define MAX 300 	// maximum celsius value. MAX is the symbolic name
#define STEP 20		//increment START by 20. STEP is the symbolic name/constant

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: convert fahrenheit to celsius using only 
 * symbolic constant
 */

int main(void) 	//'int' represents the return type 
{
	float Cel, Fah; 	// Since they are of the same type they can be on the same line

	printf("Temprature Converter\n");
	printf("=====================\n");
	printf("Fahrenheit to Celsius\n");
	printf("---------------------\n");

	for (Fah = MIN; Fah <= MAX; Fah += STEP)
	{
		Cel = (5.0 / 9.0) * (Fah - 32);
		printf("%3.1f %6.1f\n", Fah, Cel);
	}
}
