#include<iostream>
using namespace std;

main(){
	int i,j,s,n=5;
	
	for(i=n;i>=1;i--){
		for(s=5;s>i;s--){
			cout<<"  ";
		}
		for(j=1;j<=i;j++){
			cout<<j%2<<" ";
		}
		cout<<endl;
	}
}
