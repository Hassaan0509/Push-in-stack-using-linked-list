#include "Header.h"

bool stack::push(int x)
{
	node* newNode = new node();
	node* temp = head;
	newNode->data = x;
	newNode->next = head;
	head = newNode;
	return true;
}