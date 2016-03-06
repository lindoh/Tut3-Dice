#include "Dice.h"
#include <iostream>

using namespace std;


float average(Dice value, int num_rolls);
float average(int A[], int num_int);

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
	randNum = rand() % 6 + 1;		//random number between 1 and 6
	num_rolls += 1;

	Dice value;
	average(value,num_rolls);

	int int_array[20];
	int_array[num_rolls] += randNum;

	average(int_array, num_rolls);
	
	return randNum;
}


float average(Dice value, int num_rolls)
{
	float ave =0;			//average number of dice rolls
	int sum_rolls=0;		//sum all the dice rolls made

	sum_rolls += value.roll();
	ave = (float)sum_rolls / num_rolls;

	return ave;
}

float average(int A[], int num_int)
{
	float ave = 0;
	float temp = 0;
	
	for (int i = 0; i < num_int; i++)
	{
		temp += A[i];
	}

	ave = (float)temp / num_int;
	return temp;
}