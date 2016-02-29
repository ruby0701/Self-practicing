// Alg8_0725.cpp : Defines the entry point for the console application.
//Linear-Time prefix averages algorithm

#include <iostream>
using namespace std;


int main()
{
	int count = 0, sum = 0;
	int num[10000] = { 0 };
	double avg[10000] = { 0 };

	cout << "Total number : " << endl;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> num[i];
	}

	cout << "End of input" << endl;

	for (int i=0; i < count; i++)
	{
		sum = sum + num[i];
		avg[i] = (double)sum / (i + 1);
	}

	for (int i = 0; i < count; i++)
	{
		cout << i << " , " << avg[i] << endl;
	}
	return 0;
}

