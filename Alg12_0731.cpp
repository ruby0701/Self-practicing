// Alg12_0731.cpp : Defines the entry point for the console application.
//Queue

#include <iostream>
#include "Queue.h"
using namespace std;


int main()
{
	Queue queue;

	while (!cin.eof())
	{
		cout << "Please choice the opeation : " << endl;
		cout << "1 for enqueue()" << endl
			<< "2 for dequeue()" << endl
			<< "3 for isEmpty()" << endl
			<< "4 for size()" << endl
			<< "5 for front()" << endl
			<< "6 for printQueue()" << endl;

		int opt = 0;
		cin >> opt;

		int num = 0;

		switch (opt)
		{
		case 1://enqueue
			cout << "Please enter the number to queue : " << endl;
			cin >> num;
			queue.enqueue(num);
			queue.printQueue();
			break;
		case 2://dequeue
			queue.dequeue();
			queue.printQueue();
			break;
		case 3://isEmpty
			if (queue.isEmpty() == true)
				cout << "The queue is empty!" << endl;
			else
				cout << "The queue is NOT empty!" << endl;
			break;
		case 4://size
			cout << "The size of the queue is : " << endl;
			cout << queue.size() << endl;
			break;
		case 5://front
			cout << "The front number of the queue is : " << endl;
			cout << queue.front() << endl;
			break;
		case 6://pinting
			queue.printQueue();
		}
	}
	
	return 0;
}

