// Alg14_0804.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Vector.h"
using namespace std;


int main()
{
	Vector vector;

	vector.insertEle(12);
	vector.printVector();
	vector.insertEle(14);
	vector.printVector();
	vector.insertEle(0,0);
	vector.printVector();

	vector.insertEle(1);
	vector.printVector();
	vector.removeEle(2);
	vector.printVector();

	vector.replaceEle(0, 1);
	vector.printVector();

	cout << vector.size() << endl;
	if (vector.isEmpty() == true)
		cout << "Empty";
	else
		cout << "Not empty";


	return 0;
}

