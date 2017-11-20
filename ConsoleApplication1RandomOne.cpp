// ConsoleApplication1RandomOne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;



int main()
{

	
	int RanM;
	srand(time(NULL));
	RanM = rand() % 35 + 1;
	printf("This program generates a random number in the range between 1 and 35 ");
	printf("and this time""% d",RanM );


	printf( " is the random number.");
	puts("");
	puts("");
    return 0;
}

