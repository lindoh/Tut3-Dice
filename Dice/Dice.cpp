#include "Dice.h"
#include <iostream>

using namespace std;




Dice::Dice()
{

}

Dice::~Dice()
{

}

int Dice::roll()
{
	int randNum;		//randNum will hold a random number between 1 and 6
	int num_rolls = 0;		//number of rolls made
	srand(time(NULL));

	randNum = rand()%6 + 1;		//random number between 1 and 6
	num_rolls += 1;
	
	return randNum;
}


float average(Dice value, int num_rolls)
{
	float ave;			//average number of dice rolls
	int sum_rolls=0;		//sum all the dice rolls made

	sum_rolls += value.roll();
	ave = (float)sum_rolls / num_rolls;

	return ave;
}

float average(int A[], int num_int)
{
	float ave;
	float temp = 0;
	
	for (int i = 0; i < num_int; i++)
	{
		temp += A[i];
	}

	ave = (float)temp / num_int;
	return temp;
}