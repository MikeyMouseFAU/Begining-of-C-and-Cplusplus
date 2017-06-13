/*This program reads inputted heights in centimeters and converts it into feet and inches.
I could not figure out how to proceed with function as a double so I decide to omit that step*/

#include "stdafx.h"
#include <stdio.h>

void convert(double cm);

int main(void){	
	double cm;
	
	printf("Enter a height in centimeters (<=0 to quit): ");
	scanf_s("%lf", &cm);
while (cm > 0) {
	convert(cm);
	printf("Enter a height in centimeters (<=0 to quit): ");
	scanf_s("%lf", &cm);}
	printf("\nHope You ENJOYED IT");
	printf("\nBye");
	printf("\nDone!\n\n");
	return 0;

}

void convert(double _cm){
	int feet;
	double inches;
		inches = _cm * 0.393701;
		feet = inches / 12;
		inches = inches - (feet * 12);
		printf("%.1lf cm = %d feet, %.1lf inches\n", _cm, feet, inches);
}

