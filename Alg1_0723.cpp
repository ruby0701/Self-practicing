// Alg1_0723.cpp : Defines the entry point for the console application.
//Finding the maximum number ina finite sequence 

#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	int max = 0,count=0;
	int num[10000] = { 0 };

	cout << "Please enter the total number you wish to input : " << endl;
	cin >> count;

	for (int j = 0; j < count;j++)
	{
		cin >> num[j];
	}
	cout << "End of input" << endl;

	max = num[0];
	for (int i = 1; i < count; i++)
	{
		if (max <= num[i])
		{
			max = num[i];
		}
	}

	Sleep(2000);

	cout << "The biggest number of the number array is : " << max << endl;
	return 0;
}

