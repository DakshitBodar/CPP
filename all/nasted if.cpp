#include<iostream>
using namespace std;

main(){
	
	int a=10,b=83,c=11,d=12;
	
	if(a > b && a > c && a > d){
		cout<<"A is max";
	}else if(b > c && b > d){
		cout<<"B is max";
	}else if(c > d){
		cout<<"C is max";
	}else{
		cout<<"D is max";
	}
}
