// Alg9_0728.cpp : Defines the entry point for the console application.
//1-D peak finding

#include <iostream>
using namespace std;


int main()
{
	int count = 0,pos=0;
	int peak[1000] = { 0 };
	int num[10000] = { 0 };
	int pCount = 0;

	cout << "Total number : " << endl;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> num[i];
	}

	for (int j = 0; j < count; j++)
	{
		pos = j;
		if (j == 0)
		{
			if (num[j] >= num[j + 1])
			{
				peak[pCount] = num[j];
				cout << "position " << pos << " has a peak : " << peak[pCount] << endl;
				pCount++;
			}
		}
		if (j == count-1)
		{
			if (num[j] >= num[j - 1])
			{
				peak[pCount] = num[j];
				cout << "position " << pos << " has a peak : " << peak[pCount] << endl;
				pCount++;
			}
		}
		else
		{
			if ((num[j] >= num[j - 1])&&(num[j]>=num[j+1]))
			{
				peak[pCount] = num[j];
				cout << "position " << pos << " has a peak : " << peak[pCount] << endl;
				pCount++;
			}
		}
	}
		return 0;
}

