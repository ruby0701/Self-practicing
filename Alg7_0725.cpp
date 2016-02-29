// Alg7_0725.cpp : Defines the entry point for the console application.
//Quadratic_Time prefix averages algorithm

#include <iostream>
using namespace std;


int main()
{
	int count = 0;
	int num[10000] = { 0 };
	double avg[10000] = { 0 };

	cout << "Total number : " << endl;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> num[i];
	}

	cout << "End of input" << endl;

	for (int i = 0; i < count; i++)
	{
		int sum = 0;
		for (int j = 0; j <= i; j++)
		{
			sum = sum + num[j];
		}
		avg[i] = (double)sum/(i+1);
	}

	cout << "Result : " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "avg[" << i << "] is : " << avg[i] << endl;
	}
	return 0;
}

