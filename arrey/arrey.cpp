#include<iostream>
using namespace std;

main(){
	int a[] = {10,1,4,7},size,i;
	
	cout<<"Enter arrey no :- ";
	cin>>size;
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"print arrey element"<<endl;
	for(i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	
}
