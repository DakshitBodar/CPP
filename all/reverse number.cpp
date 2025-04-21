#include<iostream>
using namespace std;

main(){
	int no=
	1234,r,rev=0;
	 
	cout<<"Before number :-1234"<<endl;
	cout<<"After number :- ";
	while(no != 0){
		r=no % 10;
		rev=(rev * 10) + r;
		no=no / 10;
		cout<<r;
		
	}

	
}
