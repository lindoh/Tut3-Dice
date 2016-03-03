#ifndef Dice_H
#define Dice_H
#include <iostream>

using namespace std;

float average(Dice value, int num_rolls);
float average(int A[], int num_int);

class Dice
{
public:
	Dice();
	~Dice();
	int roll();

};


#endif