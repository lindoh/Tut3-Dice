#include "Dice.h"
#include <iostream>

using namespace std;

float average(Dice value, int num_rolls);
float average(int A[], int num_int);

int main()
{
	Dice dyc;
	int start = 0;
	int num_roll = 0;

	int int_array[10];
	

	

	while ( num_roll != 10)
	{
		cout << "Please enter 1 to Roll Dice" << endl;
		cin >> start;
		int temp = 0;
		temp = dyc.roll();
		cout<<"You rolled number : " << temp<<endl;
		int_array[num_roll] += temp;
		num_roll++;
		start = 0;
	}
	
	cout << average(dyc, num_roll)<< endl;
	cout << average(int_array, num_roll) << endl;;

	system("pause");
	return 0;

}