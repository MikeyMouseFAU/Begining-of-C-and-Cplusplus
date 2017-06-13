/*This program calculates area and perimeter of the rectangle from give measurements*/


#include "stdafx.h"
#include <stdio.h>

int main(void)
{
	double height, width, area, perimeter, expArea, expPerimeter;

	expArea = 0.25*1.55;
	expPerimeter = 2 * (0.25 + 1.55);

	printf("Hello. I will help you calculate area and perimeter an rectangle.\n");
	printf("Please provide me with width and height in centimeters\n\n");
	printf("Look at below example\n");
	printf("Given dimensions in centimeters:\n");
	printf("Width = 0.25 cm\n");
	printf("Height = 1.55 cm\n\n\n");
	printf("Results:\n");
	printf("Perimeter = %.2lf cm\n", expPerimeter);
	printf("Area = %.2lf cm^2\n\n\n", expArea);
	printf("Now it is your turn!!!\n\n");
	printf("What is the width of the rectangle?\n");
	scanf_s("%lf", &width);
	printf("\nWhat is the height of the rectangle?\n");
	scanf_s("%lf", &height);

	area = height * width;
	perimeter = 2 * (height + width);

	printf("\nRectangles width you provided is %.2lf cm.\n\n", width);
	printf("Rectangles height you provided is %.2lf cm.\n\n", height);
	printf("Results:\n");
	printf("Perimeter = %.2lf cm\n", perimeter);
	printf("Area = %.2lf cm^2\n\n\n\n", area);

	return 0;
}
