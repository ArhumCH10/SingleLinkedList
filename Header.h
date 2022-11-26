struct Node {
	int data;
	Node  *next;
};

class Linklist {
public:
	Linklist();
	~Linklist();


	int front();
	int back();
	void insertAtFront(int);
	void insertAtEnd(int);  
	int removeFromFront();  
	int removeFromEnd();    
	bool empty();
	int Size();
	void Display();
private:

    Node *head;
	Node * tail;
	int maxSize;
};
