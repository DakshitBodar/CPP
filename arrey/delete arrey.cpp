#include<iostream>
using namespace std;

main(){
	int a[45] = {10,20,30,40,50};
	int pos=2,i,size=5;
	
	for(i=pos;i<=size;i++){
		a[i] = a[i+1];
	}

	size--;
	
	for(i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	
	
}
