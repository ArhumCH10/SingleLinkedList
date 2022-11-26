#include<iostream>
#include"Header.h"
using namespace std;
int main(){
	Linklist L;
	L.insertAtFront(10);
	L.insertAtFront(20);
	L.insertAtFront(30);
	L.insertAtFront(40);
	cout << "Data Inserted from Front :";
	L.Display();
	cout << "Front :" << L.front() << endl;
	cout << "Back :" << L.back() << endl;
	cout << "size of link list:" << L.Size() << endl;
	L.insertAtEnd(11);
	L.insertAtEnd(13);
	L.insertAtEnd(15);
	L.insertAtEnd(17);
	cout << "Data Inserted from end :";
	L.Display();
	cout << "Front :" << L.front() << endl;
	cout << "Back :" << L.back() << endl;
	cout << "size of link list:" << L.Size() << endl;
	L.removeFromFront();
	L.removeFromFront();
	L.removeFromFront();

	cout << "After 3 times Remove From Front :";
	L.Display();
	cout << "Front :" << L.front() << endl;
	cout << "Back :" << L.back() << endl;
	cout << "size of link list:" << L.Size() << endl;

	L.removeFromEnd();
	L.removeFromEnd();
	cout << "After 2 times Remove From End :";
	L.Display();
	cout << "Front :" << L.front() << endl;
	cout << "Back :" << L.back() << endl;
	cout << "size of link list:" << L.Size() << endl;

	return 0;
}