//// Alg13_0801.cpp : Defines the entry point for the console application.
////merge sort
//
//#include <iostream>
//using namespace std;
//
//int* merge(int L[], int R[])
//{
//	int pos = 0;
//	int r = 0, l = 0;
//	int rSize = sizeof(R);
//	int lSize = sizeof(L);
//	int sort[10000] = { 0 };
//
//	while (r<rSize && l<lSize)
//	{
//		if (R[r] <= L[l])
//		{
//			sort[pos] = R[r];
//			r++;
//		}
//		else
//		{
//			sort[pos] = L[l];
//			l++;
//		}
//		pos++;
//	}
//
//	return sort;
//}
//int* merge_sort(int t[])
//{
//	int n = sizeof(t);
//	int R[5000] = { 0 }, L[5000] = { 0 };
//	int *r, *l;
//	int mid = 0;
//
//	if (n == 1)
//		return t;
//	else
//	{
//		if (n % 2 == 0)
//			mid = n / 2;
//		else
//			mid = (n + 1) / 2;
//
//		for (int i = 0; i < mid; i++)
//		{
//			L[i] = t[i];
//		}
//		int j = 0;
//		for (int i = mid; i < n; i++)
//		{
//			R[j] = t[i];
//			j++;
//		}
//	}
//		l = merge_sort(L);
//		r = merge_sort(R);
//
//	return merge(L, R);
//}
//
//
//
//int main()
//{
//	int num[10000] = { 0 };
//	int R[5000] = { 0 }, L[5000] = { 0 };
//	int sort[10000] = { 0 };
//	int mid = 0;
//	int size=0;
//
//	cout << "Total number : " << endl;
//	cin >> size;
//
//	for (int i = 0; i < size; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << num[i] << " ";
//	}
//	cout << endl;
//
//	*sort = *merge_sort(num);
//
//	
//	cout << "Result : " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << sort[i] << " ";
//	}
//	cout << endl;
//
//
//	return 0;
//}
//
