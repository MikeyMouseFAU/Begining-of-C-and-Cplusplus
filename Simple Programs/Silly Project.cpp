
#include "stdafx.h"

void intro();
void chickHouse();
char usersName[999999];
int chickenNum, maxHouse, leftChicken, decision, loop;


int _tmain(int argc, _TCHAR* argv[]){
	
	intro();
	do{
		chickHouse();
		printf("\nWould you like to help Brown again?\n");
		printf("1. Help out\n");
		printf("2. Laugh and leave (Quit)\n");
		printf("Please make a selection: ");
		scanf_s("%d", &decision);
		printf("\n");
		while (decision != 1 && decision != 2){
			printf("\nInvalid Option!\n");
			printf("1. Help out\n");
			printf("2. Laugh and leave (Quit)\n");
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
	printf("\nThanks for helping us out %s.", usersName);
	printf("\nHave a wonderful day and come back whenever you want to.\n\n\n");
return 0;
}

void intro(){
	for (int blanks = 25; blanks > 0; blanks--, printf("\n"));
	printf("Welcome!!!\n");
	printf("What is your first name? (Please do not use spaces): ");
	scanf_s("%s", &usersName, 999999);
	printf("\nFarmer Brown needs your help, %s!!! \n", usersName);
	printf("He doesn't know how many chicken house(s) he needs to build.\n");
	printf("Each chicken house can hold maximum of 17 chickens.\n");
}

void chickHouse(){
	printf("What is a number of chickens that Farmer Brown owns (Integer between 10 and 500):");
	scanf_s("%d",&chickenNum);
	while ((chickenNum < 10) || (chickenNum > 500)){
		printf("\nYou have provided invalid number of chickens.\n");
		printf("Please try again.\n");
		printf("How many chicken does Farmer Brown have (Integer between 10 and 500):");
		scanf_s("%d",&chickenNum);
	}
	printf("\nNow that we have number of Brown's chickens we can help him out.\n");
	
	maxHouse = chickenNum / 17;
	leftChicken = chickenNum % 17;
	if (leftChicken > 0){
		++maxHouse;
		printf("For %d chickens, Farmer Brown needs %d chicken house(s) and his last house will hold %d of chicken(s).\n",chickenNum,maxHouse, leftChicken);
	}
	else	
		printf("For %d chickens, Farmer Brown needs %d chicken house(s).\n",chickenNum,maxHouse);
}