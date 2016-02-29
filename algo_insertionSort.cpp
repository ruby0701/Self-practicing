// algo_insertionSort.cpp : Defines the entry point for the console application.
//pseudo code
/*
insertion_sort(A, n) = > A[1,2...,n]
	for j=2~n
		do key = A[j]
			i = j-1
			while i>0 && A[i]>key
				do A[i + 1] = A[i]
					i = i-1
			A[i+1] = key
*/
//�qi=0~N�A�C����wi=1��m���Ʀr��key�ȡA�}�l�P�C�ӼƦr����j�p�C�p�G�J���ۤv�j���Ʀr(��m=j)���ܴN�洫��m�Anum[j-1]=key�Anum[j]=num[i]�A�@���챽�L������array

#include <iostream>
using namespace std;


int main()
{
	int num[1001] = { 0 };
	int size = 0;

	cout << "How many numbers?" << endl;
	cin >> size;

	int i = 0;
	while (i<size)
	{
		cin >> num[i];
		i++;
	}

	int key = 0;
	for (int i = 1; i < size; i++)
	{
		key = num[i];
		int j = i;
		while (j > 0 && num[j-1] > key)
		{
			num[j] = num[j-1];
			j--;
		}
		num[j] = key;
	}

	for (int i = 0; i < size; i++)
	{
		cout << num[i] << "   ";
	}
	cout << endl;
	return 0;
}

