#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

main(){
	Node *HEAD = NULL;
	HEAD = new Node();
	
	HEAD->data = 14;
	HEAD->next = NULL;
	
	Node *n2 = new Node();
	n2->data = 15;
	n2->next = NULL;
	HEAD->next = n2;
	
	Node *n3 = new Node();
	n3->data = 16;
	n3->next = NULL;
	n2->next = n3;
	
	
	cout<<"Values :- "<<HEAD->data<<"  Add :- "<<HEAD->next<<endl;
	cout<<"Values :- "<<n2->data<<"  Add :- "<<n2->next<<endl;
	cout<<"Values :- "<<n3->data<<"  Add :- "<<n3->next<<endl;
	
}
