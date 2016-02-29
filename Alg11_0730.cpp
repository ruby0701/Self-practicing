// Alg11_0730.cpp : Defines the entry point for the console application.
//stack function implementation

#include <iostream>
#include "Stack.h"
using namespace std;


int main()
{
	Stack stack;
	int opt = 0;
	while (!cin.eof())
	{
		cout << "Please choose an operation : " << endl;
		cout << "1 for pop()" << endl
			<< "2 fo push()" << endl
			<< "3 for isEmpty()" << endl
			<< "4 for size()" << endl
			<< "5 for top()" << endl
			<< "6 fo print()" << endl
			<< "^Z to end" << endl;
		cin >> opt;

		int num = 0;
		switch (opt)
		{
		case 1://pop
			cout << "Number poped : " << endl;
			cout << stack.pop() << endl;
			break;
		case 2://push
			cout << "Number to push : " << endl;
			cin >> num;
			stack.push(num);
			stack.PrintStack();
			break;
		case 3://isEmpty
			cout << "Is stack empty?" << endl;
			if (stack.isEmpty() == true)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
			break;
		case 4://size
			cout << "The size of stack is : " << endl;
			cout << stack.size() << endl;
			break;
		case 5://top
			cout << "The number at the top is : " << endl;
			cout << stack.top() << endl;
			break;
		case 6:
			cout << "Pinting stack : " << endl;
			stack.PrintStack();
			break;
		}
	}
	
	return 0;
}

