#include<iostream>
using namespace std;
main(){
	int a=10,b=50,c=20;
	
	(a>b) ?
		(a>c) ? cout<<"A is max" : cout<<"B is max"
	      :
	   (b>c)  ?  cout<<"B is max" : cout<<"C is max";
}
