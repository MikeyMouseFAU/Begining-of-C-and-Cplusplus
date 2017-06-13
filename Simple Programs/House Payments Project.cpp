//Final Project program that is designed as mortgage calculator for a real estate company.
//It informs user of its applications that inclued calculations of monthly payments for input that was provided.
//It validates inputs (price, rates, and years of paying off) and continues till users tells it otherwise.

#include "stdafx.h"
#include <stdio.h>
using namespace std;

double price, rates, money2Prin, interest, interestCount, monthRates, guessPrinciple, prinBalnce, realMonthlypayment, newPrice, monthlyPayment;
int years, months;
void intro();
void priceInput();
void yearsInput();
void ratesInput();
void inputValidation();
void monthlypayCalculation();
void outPut();
void monthlytableCalculation();
int loop = 1, decision;
char usersName[999999];

int main(){
	intro();
	do{
		priceInput();
		inputValidation();
		months = years * 12;
		monthRates = rates / 100 / 12;
		monthlypayCalculation();
		outPut();
		monthlytableCalculation();
		printf("Would you like to repeat the process?\n");
		printf("1. Repeat\n");
		printf("2. Quit\n");
		printf("Please make a selection: ");
		scanf_s("%d", &decision);
		printf("\n");
		while (decision != 1 && decision != 2){
			printf("\nInvalid Option!\n");
			printf("Chose from below options!\n");
			printf("1. Repeat\n");
			printf("2. Quit\n");
			printf("Please make a selection: ");
			scanf_s("%d", &decision);
			printf("\n");
		}
		switch (decision){
			case 1:
				loop = 1;
				break;
			case 2:
				loop = 0;
				break;
			default:
				break;
		}
	}while (loop == 1);
	printf("\nIt was pleasure to meet you %s.", usersName);
	printf("\nI hope you did find me usefull and helpfull in planning your purchase.");
	printf("\nHave a wonderfull day and remeber to come back whenever you would like.\n\n\n");

	return 0;
}
void intro(){
	for (int blanks = 25; blanks > 0; blanks--, printf("\n"));
	printf("Welcome!!!\n");
	printf("What is your first name? (Please do not use spaces): ");
	scanf_s("%s", &usersName, 999999);
	printf("\nNice to meet you %s. ", usersName);
	printf("\nI am FMC, or Futere Mortgage Calcuator. \n");
	printf("I am here to help you with your real estate purchase. \n");
	printf("I will calculate the monthly payments of your future mortgage.\n");
	printf("Could you please provide me with information about property:\n");

}
void priceInput(){
	printf("\nThe price of the property from $50,000 to $2,000,000.\n");
	printf("Price: ");
	scanf_s("%lf", &price);
}
void yearsInput(){
	printf("\nA number of years to pay of the mortgage (1 to 50 years).\n");
	printf("Years:");
	scanf_s("%d", &years);
}
void ratesInput(){
	printf("\nThe intrest rates applicable to the mortgage (3 to 15 percent).\n");
	printf("Please ommit percent sign while inputting data.\n");
	printf("Intrest Rates: ");
	scanf_s("%lf", &rates);
}
void inputValidation(){
	while ((price < 50000) || (price > 2000000)){
		printf("\nYou have provided invalid amount.\n");
		printf("Please try again.\n");
		priceInput();
	}
	yearsInput();
	while ((years < 1) || (years > 50)){
		printf("\nYou have typed in invalid number of years.\n");
		printf("Please try again.\n");
		yearsInput();
	}
	ratesInput();
	while ((rates < 3) || (rates > 15)){
		printf("\nYou have inputted invalid data.\n");
		printf("Please try again.\n");
		ratesInput();
	}
}
void monthlypayCalculation(){
	monthlyPayment = price / months;
	newPrice = price;
	while (newPrice > 0){
		for (int start = 0; start < months; start++){
			newPrice = newPrice * (1 + monthRates) - monthlyPayment;
		}
		if (newPrice > 0){
			monthlyPayment = monthlyPayment + 1;
			newPrice = price;
		}
		else{
			monthlyPayment = monthlyPayment - 1;
		}
	}
	newPrice = price;
	while (newPrice > 0){
		for (int start = 0; start < months; start++){
			newPrice = newPrice * (1 + monthRates) - monthlyPayment;
		}
		if (newPrice > 0){
			monthlyPayment = monthlyPayment + .01;
			newPrice = price;
		}
	}
}
void monthlytableCalculation(){
	double a[600], b[600], c[600], d[600];
	int i;
	for (i = 0; i < months; i++){
		a[i] = price;
		interestCount = monthRates * price;
		money2Prin = monthlyPayment - interestCount;
		prinBalnce = price - money2Prin;
		price = prinBalnce;
		b[i] = interestCount;
		c[i] = money2Prin;
		d[i] = prinBalnce;
	}
	for (i = 0; i < 3; i++){
		printf("%4d", i + 1);
		printf("%15.2lf", a[i]);
		printf("%15.2lf", b[i]);
		printf("%15.2lf", c[i]);
		printf("%15.2lf", d[i]);
		printf("\n");
	}
	for (int blanks = 2; blanks > 0; blanks--, printf("\n"));
	for (i = (months - 3); i < months; i++){
		printf("%4d", i + 1);
		printf("%15.2lf", a[i]);
		printf("%15.2lf", b[i]);
		printf("%15.2lf", c[i]);
		printf("%15.2lf", d[i]);
		printf("\n");
	}
	printf("\nYour last payment will be %.2lf\n\n", monthlyPayment + prinBalnce);
}
void outPut(){
	for (int blanks = 2; blanks > 0; blanks--, printf("\n"));
	printf("Principle = %.2lf		", price);
	printf("Rate = %.2lf\n", rates);
	printf("Pay/Mo. = %.2lf		", monthlyPayment);
	printf("Years = %d \n\n", years);
	printf("Months	  ");
	printf("Principle	  ");
	printf("Interest	");
	printf("$ to Prin    ");
	printf("Prin. Balance\n");
}