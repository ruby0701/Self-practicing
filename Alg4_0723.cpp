// Alg4_0723.cpp : Defines the entry point for the console application.
//Bubble sort : switching two adjacent numbers until all the numbers are in order

#include <iostream>
using namespace std;


int main()
{
	int count = 0;
	int num[100000] = { 0 };

	cout << "Total number of array : " << endl;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> num[i];
	}

	cout << "End of input." << endl;

	for (int i = 1; i < count; i++)
	{
		for (int j = 0; j < count - i; j++)
		{
			if (num[j] >= num[j + 1])
			{
				int temp = 0;
				temp = num[j];
				num[j] = num[j+1];
				num[j + 1] = temp;
			}
		}
	}

	cout << "Sorting result : " << endl;
	for (int t = 0; t < count; t++)
	{
		cout << num[t] << " ";
	}
	return 0;
}

