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
			cout<<"press 1 plain khaman :- "<<endl;
			cout<<"press 2 chiz khaman :- ";
			cin>>choice;
			
			switch(choice){
				case 1:
					cout<<"order plain khaman";
					break;
				case 2:
					cout<<"order chiz khaman";
					break;
			}
		break;
		
		case 2:
			cout<<"press 1 plain pizza :- "<<endl;
			cout<<"press 2 chiz pizza :- "<<endl;
			cin>>choice;
			switch(choice){
				case 1:
					cout<<"order plain pizza";
					break;
				case 2:
					cout<<"order chiz pizza";
					break;
			}
		break;
			
		case 3:
			cout<<"press 1 plain locho :- "<<endl;
			cout<<"press 2 chiz locho :- "<<endl;
			cin>>choice;
			switch(choice){
				case 1:
					cout<<"order plain locho";
					break;
				case 2:
					cout<<"order chiz locho";
					break;
			}
			break;
	}
}
