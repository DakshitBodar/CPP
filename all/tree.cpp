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
	Node* root7 = new Node;
	Node* root8 = new Node;
	Node* root9 = new Node;
	Node* root10 = new Node;
	Node* root11 = new Node;
	
	
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
	root4->left = root7;
	root4->right = root8;
	
	root5->data = 'E';
	root5->left = root9;
	root5->right = root10;
	
	root6->data = 'F';
	root6->left = NULL;
	root6->right = root11;
	
	root7->data = 'G';
	root7->left = NULL;
	root7->right = NULL;
	
	root8->data = 'H';
	root8->left = NULL;
	root8->right = NULL;
	
	root9->data = 'I';
	root9->left = NULL;
	root9->right = NULL;
	
	root10->data = 'J';
	root10->left = NULL;
	root10->right = NULL;
	
	root11->data = 'K';
	root11->left = NULL;
	root11->right = NULL;
	
	
	cout<<"           "<<root->data<<endl;
	cout<<"        "<<root->left->data;
	cout<<"      "<<root->right->data<<endl;
	cout<<"     "<<root2->left->data;
	cout<<"       "<<root3->left->data;
	cout<<"    "<<root3->right->data<<endl;
	cout<<"  "<<root4->left->data;
	cout<<"    "<<root4->right->data;
	cout<<"   "<<root5->left->data;
	cout<<"   "<<root5->right->data;
	cout<<"    "<<root6->right->data;
	
	return 0;
}
