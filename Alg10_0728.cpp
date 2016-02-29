// Alg10_0728.cpp : Defines the entry point for the console application.
//2-D peak finding

#include <iostream>
using namespace std;


int main()
{
	int num[100][100] = { 0 };
	int row = 0, col = 0;
	int count = 0;
	int peak = 0;

	cout << "Row?Column?" << endl;
	cin >> row >> col;

	count = row*col;


	for (int j = 0; j < row; j++)
	{
		for (int l = 0; l < col; l++)
		{
			cin >> num[j][l];
		}
	}


	cout << "Printing the array : " << endl;

	for (int j = 0; j < row; j++)
	{
		for (int l = 0; l < col; l++)
		{
			cout << num[j][l] << " ";
		}
		cout << endl;
	}



	if (col % 2 == 0)
	{
		col = col / 2;
	}
	else
	{
		col = (col - 1) / 2;
	}

	for (int i = 0; i < row; i++)
	{
		if (i == 0)
		{
			if (num[i][col] >= num[i + 1][col])
			{
				cout << "local peak at : " << i << " , " << col << endl;
				peak = num[i][col];
				row = i;
			}
		}
		if (i == row - 1)
		{
			if (num[i][col] >= num[i - 1][col])
			{
				cout << "local peak at : " << i << " , " << col << endl;
				peak = num[i][col];
				row = i;
			}
		}
		else
		{
			if ((num[i][col] >= num[i + 1][col]) && (num[i][col] >= num[i - 1][col]))
			{
				cout << "local peak at : " << i << " , " << col << endl;
				peak = num[i][col];
				row = i;
			}
		}
	}
	bool check = false;

	while (check == false)
	{
		if ((num[row][col] >= num[row + 1][col]) && (num[row][col] >= num[row][col + 1]) && (num[row][col] >= num[row - 1][col]) && (num[row][col] >= num[row][col-1]))
		{
			check = true;
		}
		if (num[row][col] <= num[row + 1][col])
		{
			row++;
		}
		if (num[row][col] <= num[row][col + 1])
		{
			col++;
		}
		if (num[row][col] <= num[row - 1][col])
		{
			row--;
		}
		if (num[row][col] <= num[row][col-1])
		{
			col--;
		}
	}

	cout << "Global peak is " << num[row][col] << " at position : " << row << " , " << col << endl;

	





	return 0;
}

