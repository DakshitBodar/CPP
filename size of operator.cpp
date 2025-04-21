#include<iostream>
using namespace std;

void swap(int a,int b);

main(){
	
	//	size of operator
//	cout<<"int size :- "<<sizeof(int)<<endl;
//	cout<<"Float size :- "<<sizeof(float)<<endl;
//	cout<<"Char size :- "<<sizeof(char)<<endl;
//	cout<<"Double size :- "<<sizeof(double)<<endl;


	//	array of pointer
//	int a[50] = {10,2,3,8,4,6},i;
//	int *p = a;
//	
//	for(i = 0;i<6;i++){
//		cout<<a[i]<<" Address :- "<<p<<endl;
//		p++;
//	}

	
	int a=10,b=5;
	swap(a,b);
	
	
}

void swap(int a,int b){
	int *p=&a;
	int *q=&b;
	int c;
	c = *p;
	*p = *q;
	*q = c;
	cout<<"A = "<<*p<<endl;
	cout<<"B = "<<*q<<endl;
}
