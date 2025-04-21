#include<iostream>
using namespace std;

main(){
	
	int a[5] = {8,4,9,7,2};
	int n = 5,emt;
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++)
		  if(a[i] > a[j]){
		  	emt = a[i];
		  	a[i] = a[j];
		  	a[j] = emt;
		  }
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
