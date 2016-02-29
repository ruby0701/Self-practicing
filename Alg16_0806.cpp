// Alg16_0806.cpp : Defines the entry point for the console application.
//linked list implemented without header file

#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
	int data;
	struct node* nextPtr;
};

typedef struct node Node;
typedef Node* NodePtr;

void insert(NodePtr *sPtr, int value);
void deleting(NodePtr *sPtr,int value);
bool isEmpty(NodePtr sPtr);
void printList(NodePtr cPtr);

int main()
{
	NodePtr startPtr = NULL;
	int value = 0;
	int choice = 0;

	while (!cin.eof())
	{
		cout << "Please enter the operation you want to do : " << endl;
		cout << " 1 : insert" << endl
			<< " 2 : delete" << endl
			<< " 3 : isEmpty" << endl
			<< " 4 : printList" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Please enter the value you want to insert : " << endl;
			cin >> value;
			insert(&startPtr, value);
			break;
		case 2:
			cout << "Please enter the value you want to delete : " << endl;
			cin >> value;
			deleting(&startPtr, value);
			break;
		case 3:
			isEmpty(startPtr);
			break;
		case 4:
			printList(startPtr);
			break;
		}
	}
	
	return 0;
}

void insert(NodePtr *sPtr, int value)
{
	NodePtr previousPtr;
	NodePtr currentPtr;
	NodePtr newPtr;

	newPtr = (NodePtr)malloc(sizeof(newPtr));

	if (newPtr != NULL)//if successfully allocate 
	{
		newPtr->data = value;
		newPtr->nextPtr = NULL;

		previousPtr = NULL;
		currentPtr = *sPtr;

		//find the correct position in the list
		while (currentPtr != NULL && value > currentPtr->data)
		{
			previousPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}

		//insert new nodes at beginning of list
		if (previousPtr == NULL)
		{
			*sPtr = newPtr;//???
			newPtr->nextPtr = currentPtr;
		}
		else//insert new node between previous and current node
		{
			previousPtr->nextPtr = newPtr;
			newPtr->nextPtr = currentPtr;
		}
	}
	else
	{
		cout << "No memory available!" << endl;
	}
	

}
void deleting(NodePtr *sPtr, int value)
{
	NodePtr currentPtr;
	NodePtr previousPtr;
	NodePtr tempPtr;

	if (value == (*sPtr)->data)
	{
		tempPtr = *sPtr;
		*sPtr = (*sPtr)->nextPtr;
		free(tempPtr);
	}
	else
	{
		previousPtr = *sPtr;
		currentPtr = (*sPtr)->nextPtr;
		//move to next node to find value

		while (currentPtr != NULL && currentPtr->data != value)
		{
			previousPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}

		if (currentPtr != NULL)
		{
			tempPtr = currentPtr;
			previousPtr->nextPtr = currentPtr->nextPtr;
			free(tempPtr);
		}
	}
}
bool isEmpty(NodePtr sPtr)
{
	if (sPtr == NULL)
		return true;
	else
		return false;
}
void printList(NodePtr cPtr)
{
	if (isEmpty(cPtr) == true)
	{
		cout << "The list is empty!" << endl;
	}
	else
	{
		cout << "The list is : " << endl;
		
		while (cPtr != NULL)
		{
			cout << cPtr->data << " ";
			cPtr = cPtr->nextPtr;
		}

		cout << "NULL" << endl;
	}
}

