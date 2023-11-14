#include <stdio.h>
#include <stdlib.h>
/**
 * Description: Program to evaluate face values.
 * Released under the aficantechjo & jo-dev123 license Ha-Ha
 * (c) 2023 Degbor Johnson
 */
int main()
{
	char card_name[3];
	puts("Enter your card name:");
	scanf("%2s", card_name); //card_name stores address of card_name[0]

	int val = 0;

	if (card_name[0] == 'K' || card_name[0] == 'k')
	{
		val = 10;
	} else if (card_name[0] == 'Q' || card_name[0] == 'q')
	{
		val = 10;
	}else if (card_name[0] == 'J' || card_name[0] == 'j')
	{
		val = 10;
	}else if (card_name[0] == 'A' || card_name[0] == 'a')
	{
		val = 11;
	} else 
	{
		val = atoi(card_name);
	}
	printf("The value is: %i\n", val);
	
	return 0;

}
