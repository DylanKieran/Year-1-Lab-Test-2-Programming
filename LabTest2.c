/* 
C15321906
Dylan Kieran
DT228/1
Lab Test 2
Date: 08/12/2015
Compiler: Dev-C++ 5.11

This is a program that only uses pointer notation that allows you to enter contents of gallons and miles then claculate and display
the mpg using the formula mpg = miles/gallons
*/

#include <stdio.h>
#define SIZE 5

main()
{
	//
	// Declare Variables
	int i;
	float gallons[SIZE];
	float miles[SIZE];
	float mpg[SIZE];
	
	//
	// Enter values into miles array
	printf("Enter 5 numbers for miles \n");
	
	for(i=0; i<SIZE; i++)
	{
		scanf("%f",&*(miles+i));
	}
	
	//
	// Enter values into gallon array
	printf("\nEnter 5 numbers for gallons \n");
	
	for(i=0; i<SIZE; i++)
	{
		scanf("%f",&*(gallons+i));
	}
	
	//
	//Calculate contents of mpg
	for(i=0; i<SIZE; i++)
	{
		*(mpg+i) = *(miles+i) / *(gallons+i);
	}
		
	//
	//Display contents of mpg array
	for(i=0; i<SIZE; i++)
	{
		printf("mpg[%d] = %f\n",i,*(mpg+i));
	}
	
}//end main

