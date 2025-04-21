#include<iostream>
using namespace std;

main(){
	int no;
	int i=0;
	
	cout<<"enter no :- ";
	cin>>no;
	
	int fn,ln=no%10;
	while(no != 0){
		fn = no % 10;
		no = no / 10;
		i++;
	}
	cout<<"First and last no sum :- "<<fn + ln<<endl;
}
