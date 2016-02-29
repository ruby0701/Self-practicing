// Alg5_0724.cpp : Defines the entry point for the console application.
//Insertion sort

#include <iostream>
using namespace std;


int main()
{
	int count = 0;
	int num[100000] = { 0 };

	cout << "Total number : " << endl;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> num[i];
	}

	cout << "End of input" << endl;

	/*for (int i = 1; i < count; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (num[j] >= num[i])
			{
				int temp = 0;
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}*/

	/*for (int i = 1; i < count; i++)
	{
		int j = i;
		while (j>0 && num[j - 1] > num[j])
		{
			int temp = 0;
			temp = num[j];
			num[j] = num[j - 1];
			num[j - 1] = temp;

			j--;
		}
	}*/

	cout << "Sorting result : " << endl;
	for (int t = 0; t < count; t++)
	{
		cout << num[t] << " ";
	}
	cout << endl;
	return 0;
}

