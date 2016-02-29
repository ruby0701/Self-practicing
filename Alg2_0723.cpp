// Alg2_0723.cpp : Defines the entry point for the console application.
//Linear search : findinf if a number exists in an array of numbers

#include <iostream>
using namespace std;


int main()
{
	int number = 0,count=0,pos=-1;
	int num[100000] = { 0 };

	cout << "Please input the total numbe of array : " << endl;
	cin >> count;

	for (int j = 0; j < count; j++)
	{
		cin >> num[j];
	}

	cout << "End of input" << endl;

	cout << "Please enter the number that you wish to find : " << endl;
	cin >> number;

	for (int i = 0; i < count; i++)
	{
		if (num[i]==number)
		{
			pos = i;
			cout << number << " is found at position " << pos+1 << " in the array!" << endl;
		}
	}
	if (pos == -1)
	{
		cout << "No such number exists in the array!" << endl;
	}
	return 0;
}

