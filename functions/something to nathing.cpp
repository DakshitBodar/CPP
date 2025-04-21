#include<iostream>
using namespace std;
void age(int x);
main(){
	int x;
	cout<<"Enter your age :- ";
	cin>>x;
	age(x);
}

void age(int x){
	
	
	if(x>=18){
		cout<<"Aap vote kar sakte hoo...";
	}else{
		cout<<"Abee phlee bada to hoja";
	}
}
