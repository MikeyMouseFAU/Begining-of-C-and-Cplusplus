/*This program convert ounces into newPounds and newTons and left over ounces. At first it greets the user and explains to him how it works. Then it uses continuous loop to call a function that converts inputted ounces */

#include "stdafx.h"
#include <stdio.h>

void convert(int oz);
int newPounds, newTons, newOz;

int main(void){
	int space = 50;
	for (space; space > 0; space--){
			printf("\n");
		}
	int oz;
	char usersName[999999];
	printf("Hello. I am SAI.\n");
	printf("Could you tell me your first name? (Please do not use spaces): ");
	scanf_s("%s", &usersName, 999999);
	printf("\nNice to meet you %s ", usersName);
	printf("\nI hope that you are doing great today.");
	printf("\nI am a program that can convert ounces into newPounds and newTons.");\
	printf("\nFor example, 35 ounces is equal to 2 newTons, 3 newPounds, and 2 oz.");
	printf("\nIt is because there are 3 ounces in one newPound and 4 newPounds in one newTon.");
	printf("\nPlease type in number of ounces you wish to converts (values <=0 to quit): ");
	scanf_s("%d", &oz);
	while (oz > 0){
		convert(oz);
		printf("\n%d ounces is same as %d newTons, %d newPounds, and %d ounces.",oz, newTons , newPounds, newOz);
		printf("\nEnter any number of ounces or (<=0 to quit): ");
		scanf_s("%d", &oz);
	}
	printf("\nIt was pleasure to meet you %s.", usersName);
	printf("\nI had fun. I hope you did too.");
	printf("\nGood Bye. \n\n\n");
return 0;
}

void convert(int _oz){
	newPounds = _oz / 3;
	newOz = _oz % 3;
	newTons = newPounds / 4;
	newPounds = newPounds % 4;
}