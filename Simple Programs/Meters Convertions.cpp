/*Meters Convertions*/


#include "stdafx.h"
#include <stdio.h>

void convert_2_cm(double meters);
double km, mm, cm, inch, left_inch;
int ft;

int main(void){
	double meters;
	printf("\nWELCOME!!!\n");
	printf("I convert meters in to diffrent units.\n");
	printf("If you want to convert any value of meters\n");
	printf("just type it in (vaule <=0 ends program): ");
	scanf_s("%lf", &meters);
	while (meters > 0){
		convert_2_cm(meters);
		printf("%.2lf m = %.2lf km = %.2lf cm = %.2lf mm = %d ft %.2lf inches." meters, km, cm, mm, left_inch, ft);
		int space = 10;
		for (space; space > 0;space--){
			printf("\n");
		}
		printf("Enter another value in meters (value <=0 to quit): ");
		scanf_s("%lf", &meters);
	}
	return 0;
}

void convert_2_cm(double _meters){
	km = _meters / 1000;
	cm = _meters * 100;
	mm = _meters * 1000;
	inch = _meters * 39.3701;
	ft = inch / 12;
	left_inch = inch % 12
}
