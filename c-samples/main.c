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
	int fahr, celsius;

	int lower = 0;		/* lower limit of temperature table */
	int upper = 300; 	/* upper limit */
	int step = 20;

	fahr = lower;
	while(fahr <= upper){
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

int main(){
	fahr_to_celsius_table();
}



