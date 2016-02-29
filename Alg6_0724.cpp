// Alg6_0724.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	int coin[4] = { 25, 10, 5, 1 };
	int change[4] = { 0 };
	int total = 0;

	cout << "Please enter the amount of money that you wish to change : " << endl;
	cin >> total;

	for (int i = 0; i < 4; i++)
	{
		while (total>=coin[i])
		{
			change[i]++;
			total = total - coin[i];
		}
	}

	cout << "Change result ==> " << endl << "You have : " << endl;

	for (int j = 0; j < 4; j++)
	{
		cout << coin[j] << " * " << change[j] << endl;
	}
	return 0;
}

