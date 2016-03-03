#include "Dice.h"

Dice::Dice()
{

}

Dice::~Dice()
{

}

int Dice::roll()
{
	int randNum;		//randNum will hold a random number between 1 and 6
	int num_rolls;		//number of rolls made
	randNum = rand() % 6 + 1;		//random number between 1 and 6
	num_rolls += 1;

	Dice value;
	average(value,num_rolls);
	
	return randNum;
}


float average(Dice value, int num_rolls)
{
	float ave;			//average number of dice rolls
	int sum_rolls;		//sum all the dice rolls made

	sum_rolls += value.roll();
	ave = sum_rolls / num_rolls;

	return ave;
}

float average(int A[], int num_int)
{

}