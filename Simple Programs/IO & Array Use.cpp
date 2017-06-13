/*Simple program introducing use of varaible input, output and array use*/

#include "stdafx.h"
#include <stdio.h>
int main(void)
{
	int age;              
	double assets;         
	char pet[10];           

	printf("Enter your age: ");
	scanf_s("%d", &age);  
	printf("Enter your assets: ");
	scanf_s("%lf", &assets);
	printf("Enter your favorite pet: ");
	scanf_s("%s", &pet, 10);               
	printf("\nYou are %d years old.\n"              
		   "Your total assest are $%.2lf.\n"  
			  //when 100.229 is provided as assests: Assests are printed as $100.30 due to .2 in front of lf 	
			  //when 10,000.22 is typed for assets:Assets are printed as $10.00 and pet is displayed as ,000.22
			  //This happens because |,| is read as char/string and its moved to pet variable due %s 
		   "And your favorite pet is %s.\n\n", age, assets, pet);  
				//When pet is 10 or more characters long it does not show up as it cannot be placed in to the array pet[10]
				//that can only holds 10 charactes for which one is end of file - EOF									
	return 0;
}