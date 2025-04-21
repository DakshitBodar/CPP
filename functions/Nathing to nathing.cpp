#include<iostream>
using namespace std;
void age();
main(){
	age();
}

void age(){
	int age;
	cout<<"Enter your age :- ";
	cin>>age;
	
	if(age>=18){
		cout<<" You Can Vote";
	}else{
		cout<<" You Can't Vote";
	}
}
