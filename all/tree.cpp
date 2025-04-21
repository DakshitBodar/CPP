#include<iostream>
using namespace std;

class Node{
	public:
	char data;
	Node* left;
	Node* right;
};

int main(){
	
	Node* root = new Node;
	Node* root2 = new Node;
	Node* root3 = new Node;
	Node* root4 = new Node;
	Node* root5 = new Node;
	Node* root6 = new Node;
	
	root->data = 'A';
	root->left = root2;
	root->right = root3;
	
	root2->data = 'B';
	root2->left = root4;
	root2->right = NULL;
	
	root3->data = 'C';
	root3->left = root5;
	root3->right = root6;
	
	root4->data = 'D';
	root4->left = NULL;
	root4->right = NULL;
	
	root5->data = 'E';
	root5->left = NULL;
	root5->right = NULL;
	
	root6->data = 'F';
	root6->left = NULL;
	root6->right = NULL;
	
	
	cout<<"           "<<root->data<<endl;
	cout<<"        "<<root->left->data<<"      "<<root->right->data<<endl;
	cout<<"     "<<root2->left->data<<"       "<<root3->left->data<<"    "<<root3->right->data<<endl;
	
	return 0;
}
