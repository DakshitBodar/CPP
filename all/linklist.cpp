#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

main(){
	Node *HEAD = new Node();
	HEAD->data = 25;
	HEAD->next =NULL;
	
	Node *current = new Node();
	current->data = 30;
	current->next = NULL;
	HEAD->next = current;
	
	current = new Node();
	current->data = 35;
	current->next = NULL;
	HEAD->next->next = current;

	current = new Node();	
	current->data = 40;
	current->next = NULL;
	HEAD->next->next->next = current;
	
	
	Node *p = HEAD;
	
	while(p != NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
	
}
