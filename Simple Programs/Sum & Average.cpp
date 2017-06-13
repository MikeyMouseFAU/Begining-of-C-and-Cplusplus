//Program reads any number of integers and outputs the values that were typed in
//the sum of the values, and the average

#include "stdafx.h"
#include <stdio.h>
void greeting();
char usersName[999999];
void averg(double _sum, double _count);
double average;

int main(void){
	int quitIntegers, integerNum;
	int sum = 0;
	int count = 0;
	greeting();
	quitIntegers = scanf_s("%d", &integerNum);
    while (quitIntegers == 1){
		sum = sum + integerNum;
		count ++;
		printf("\nValue %d = %d", count ,integerNum);
		printf("\n");
		printf("\nPlease enter next integer (q to quit): ");
        quitIntegers = scanf_s("%d", &integerNum);	
	}
	printf("Total is %d.",sum);
	averg((double) sum, (double) count);
	printf("\nAverage is %.2lf.",average);
	printf("\nIt was pleasure to meet you %s.", usersName);
	printf("\nI had fun. I hope you did too.");
	printf("\nGood Bye. \n\n\n");
return 0;
}
	
void greeting(){
	printf("Hello.\n");
	printf("What is your first name? (Please do not use spaces): ");
	scanf_s("%s", &usersName, 999999);
	printf("\nNice to meet you %s ", usersName);
	printf("\nI hope that you are doing great today.");
	printf("\nI am a program that will sum and average all the integers that you will type in.");
	printf("\nRemeber integers are only a real numbers (i.e 1,2,3,4).");
	printf("\nIf you provide me values with decimals (i.e. 5.0,4.0,3.0), error may occur.");
	printf("\nType any number of integers you wish to see summed and averaged (q to quit): ");
}
void averg(double _sum, double _count){
	average = _sum / _count;
}