// algo_binarySearch.cpp : Defines the entry point for the console application.
//finding an element in a SORTED array
//divide-conquer-combine
/*
1.Divide : check middle element
2.Conquer : recursively search 1 binary array
3.Combine : trivial
*/
/*
// initially called with low = 0, high = N-1
BinarySearch(A[0..N-1], value, low, high) {
// invariants: value > A[i] for all i < low
value < A[i] for all i > high
if (high < low)
return not_found // value would be inserted at index "low"
mid = (low + high) / 2
if (A[mid] > value)
return BinarySearch(A, value, low, mid-1)
else if (A[mid] < value)
return BinarySearch(A, value, mid+1, high)
else
return mid
}
*/

#include <iostream>
#include <vector>
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

int binary_search(vector<int> &vec, int test, int low, int high)
{
	if (high < low)
		return -1;
	int mid = (high + low) / 2;
	if (vec[mid] > test)
		return binary_search(vec, test, low, mid - 1);
	else if (vec[mid] < test)
		return binary_search(vec, test, mid + 1, high);
	else
		return mid;

};

int main()
{
	int temp;
	int test = 0;
	int size = 0;

	cin >> size;

	for (int s = 0; s < size; s++)
	{
		cin >> temp;
		num.push_back(temp);
	}

	num.erase(num.begin() + num.size() - 1);

	num = sort(num);

	cout << "Number to find?" << endl;
	cin >> test;

	int find = 0;
	find = binary_search(num, test, 0, num.size());
	if (find != -1)
		cout << find << " : " << num[find] << endl;
	if (find == -1)
		cout << "no found" << endl;

	return 0;
}

