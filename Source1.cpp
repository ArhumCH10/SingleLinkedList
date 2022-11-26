#include"Header.h"
#include<iostream>
using namespace std;

Linklist::Linklist(){
	head = NULL;
	tail = NULL;
	maxSize = 0;
}
Linklist::~Linklist(){

}

int Linklist::front(){
	return head->data;
}

int Linklist::back(){
	
	return tail->data;
}
	
void Linklist:: insertAtFront(int value){
	Node * temp = new Node;
	temp->data = value;
	if (head == NULL)
	{
		temp->next = NULL;
		tail = temp;

	}
	else
	{
		temp->next = head;
	}
	head = temp;
	maxSize++;	
	
}

void Linklist:: insertAtEnd(int value){
	Node * temp = new Node;
	temp->data = value;
	temp->next = NULL;
	tail->next = temp;
	tail = temp;
	maxSize++;
	if (head == NULL)
	{
		head = temp;
	}
}

int Linklist::removeFromFront(){
	int num=0;
	if (empty())
	{
		cout << "Link List is Empty\n";
		cout << "0 is returning\n";
		return num;
	}
	else
	{
		Node *temp = head;
		head = head->next;
		temp->next = NULL;
		int num = temp->data;
		free(temp);
		maxSize--;
		return num;
	}
}

int Linklist::removeFromEnd(){
	int num = 0;
	if (empty())
	{
		cout << "Link List is Empty\n";
		cout << "0 is returning\n";
		return num;
	}
	else
	{
		Node *temp = head;
		while (temp->next->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = NULL;
		num= tail->data;
		free(tail);
		tail = temp;
		maxSize--;
		return num;
	}

}
	
bool Linklist:: empty(){
	if (tail==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
	
int Linklist::Size(){
	return maxSize;
}

void Linklist::Display(){
	Node * temp = head;

	while (temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}