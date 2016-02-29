// algo_mergeSort.cpp : Defines the entry point for the console application.
//pseudo code
/*
merge_sort(A[1...n])
1.if n=1, done;
2.recursively sort A[1...[n/2]] and A[[n/2]+1...n]
3.merge 2 sorted list
***key subroutine : merge
*/

#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

vector <int> num;
vector<int> tempNum;

vector<int> merge(vector<int>& vec, vector<int>& left, vector<int>& right)
{

	//for (int l = 0; l < left.size(); l++)
	//{
	//	for (int r = 0; r < right.size(); r++)
	//	{
	//		if (left[l] <= right[r])
	//		{
	//			tempNum.push_back(left[l]);
	//			//l++;
	//		}
	//		else
	//		{
	//			tempNum.push_back(right[r]);
	//			//r++;
	//		}
	//	}
	//}

	//return tempNum;

	// Fill the resultant vector with sorted results from both vectors
	vector<int> result;
	unsigned left_it = 0, right_it = 0;

	while (left_it < left.size() && right_it < right.size())
	{
		// If the left value is smaller than the right it goes next
		// into the resultant vector
		if (left[left_it] < right[right_it])
		{
			result.push_back(left[left_it]);
			left_it++;
		}
		else
		{
			result.push_back(right[right_it]);
			right_it++;
		}
	}

	// Push the remaining data from both vectors onto the resultant
	while (left_it < left.size())
	{
		result.push_back(left[left_it]);
		left_it++;
	}

	while (right_it < right.size())
	{
		result.push_back(right[right_it]);
		right_it++;
	}
	
	//take a source vector and parse the result to it. then return it.  
	vec = result;
	return vec;
};

vector<int> sort(vector<int> &vec)
{
	if (vec.size() == 1)
	{
		return vec;
	}

	//determine the location of the middle element of the vector
	std::vector<int>::iterator middle = vec.begin() + (vec.size() / 2);

	//declare 2 sub vector
	vector<int> left(vec.begin(), middle);
	vector<int> right(middle, vec.end());

	//sort sub vectors
	left = sort(left);
	right = sort(right);

	return merge(vec, left, right);
};

int main()
{
	int temp = 0;
	while (!cin.eof())
	{
		cin >> temp;
		if (temp == '\n')
			break;
		num.push_back(temp);
	}

	num.erase(num.begin() + num.size() - 1);
	num = sort(num);

	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i] << endl;
	}


	return 0;
}

