#include<iostream>
using namespace std;

main()
{
	int age;
	cout<<"Enter your age :- ";
	cin>>age;
	
	if(age >=18 && age <=100){
		cout<<"You can vote\n";
	}else{
		cout<<"You can't vote\n";
	}
	
	
	
	if(age >=18 || age <=100){
		cout<<"You can vote";
	}else{
		cout<<"You can't vote";
	}
	
}
