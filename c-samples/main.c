/*
 * firstprog.c
 *
 *  Created on: 2 Aug 2017
 *      Author: user
 */


#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300
 */
void fahr_to_celsius_table(){
	int fahr = 0;
	int celsius = 0;

	int lower = 0;		/* lower limit of temperature table */
	int upper = 300; 	/* upper limit */
	int step = 20;

	printf("Fahr\tCel\n");
	fahr = lower;
	while(fahr <= upper){
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

/* print Celsius-Fahrenheit table
 * for cel = -17, -6, ..., 148
 */
void celsius_to_fahr_table(){
	int celsius = 0;
	int fahr = 0;

	int lower = -17;	/* lower limit of temperature table */
	int upper = 148; 	/* upper limit */
	int step = 11;

	printf("Cel\tFahr\n");
	celsius = lower;
	while(celsius <= upper){
		fahr = ((9 * celsius) / 5) + 32;
		printf("%d\t%d\n", celsius,fahr);
		celsius = celsius + step;
	}
}

int main(){
	fahr_to_celsius_table();
	printf("\n\n");
	celsius_to_fahr_table();
}



