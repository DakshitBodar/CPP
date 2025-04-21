#include<iostream>
using namespace std;

main(){
	
	int choice;
	cout<<"Enter press 1 order khaman :-"<<endl;
	cout<<"Enter press 2 order pizza :-"<<endl;
	cout<<"Enter press 3 order locho :-"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"order khaman";
			break;
			
		case 2:
			cout<<"order pizza";
			break;
			
		case 3:
			cout<<"order locho";
			break;
	}
}
