//Program converts fahrenheits into newCelsius. It includes validation, loops and boolean check.

#include "stdafx.h"
#include <stdio.h>

void convert2newC(double fahrenheit);
double newCelsius;

int main(void){
	int quitBoolean;
	double fahrenheit;
	char usersName[999999];
	printf("Hello.\n");
	printf("What is your first name? (Please do not use spaces): ");
	scanf_s("%s", &usersName, 999999);
	printf("\nNice to meet you %s ", usersName);
	printf("\nI hope that you are doing great today.");
	printf("\nI am a program that can convert Fahrenheit into newCelsius");\
	printf("\nThe process of that is really simple. All you need to do is input a number.");
	printf("\nBut remember that absolute zero in Fahrenheit is -459.");
	printf("\nMeaning I will not be able to accept any values below -459.");
	printf("\nPlease type in number of Fahrenheit you wish to converts (q to quit): ");
	quitBoolean = scanf_s("%lf", &fahrenheit);
    while (quitBoolean == 1){
		if (fahrenheit >= -459){
			convert2newC(fahrenheit);
			printf("After convertion we came up with %.2lf newCelsius" , newCelsius);
		}
		printf("\nPlease type in another value of fahrenheit you wish to converts (q to quit): ");
		quitBoolean = scanf_s("%lf", &fahrenheit);
    }
	printf("\nIt was pleasure to meet you %s.", usersName);
	printf("\nI had fun. I hope you did too.");
	printf("\nGood Bye. \n\n\n");
return 0;
}

	void convert2newC(double _fahrenheit){
	newCelsius = 7.00/9.00 * _fahrenheit + 6;
}