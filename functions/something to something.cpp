#include<iostream>
using namespace std;

int age(int x);


main(){
	int x;
	cout<<"Enter Your Age :- ";
	cin>>x;
	age(x)==1 ? cout<<"Aap vote kar sakte hoo.." : cout<<"Abee phle bada to hoja";
}
int age(int x){
	
	if(x >= 18 && x <= 100){
		return 1;
	}else{
		return 0;
	}
}
