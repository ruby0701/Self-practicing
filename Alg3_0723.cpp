// Alg3_0723.cpp : Defines the entry point for the console application.
//Binary search : first sort the arrray, then seaching for a number in array by splitting the array each search

#include <iostream>
using namespace std;

int main()
{
	int number = 0, count = 0,pos=0,start=0;
	int num[100000] = { 0 };

	cout << "Total number of array : " << endl;
	cin >> count;

	for (int j = 0; j < count; j++)
	{
		cin >> num[j];
	}
	cout << "End of input" << endl;

	cout << "Number to find : " << endl;
	cin >> number;
	
	////sorting : bubble sort
	for (int i = 1; i < count; i++)
	{
		for (int j = 0; j < count - i ; j++)//be careful of the equation "=" or "!=" 
		{
			if (num[j] >= num[j+1])
			{
				int temp = 0;
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	cout << "Sorting result : " << endl;
	for (int t = 0; t < count;t++)
	{
		cout << num[t] << " ";
	}
	cout << endl;

	////searching
	int current = 0;
	pos = count - 1;
	while (start < pos)
	{
		if ((pos + start) % 2 == 0)
		{
			current = (pos + start) / 2;
		}
		else
		{
			current = (pos + start + 1) / 2 ;
		}

		if (number >= num[current])
		{
			start = current+1;
		}
		else
		{
			pos = current;
		}	
	}
	if (number == num[current])
	{
		current = start;
		cout << "Number : " << number << " is found at position " << current << " ." << endl;
	}
	else
	{
		current = 0;
		cout << "No such number exists." << endl;
	}

	return 0;
}

