#include<iostream>
using namespace std;

main(){
	int i,j,n=5;
	
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			cout<<"  ";
		}
		for(j=n-i;j<=n;j++){
			cout<<j<<" ";
		}
		for(j=n-1;j>=n-i;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
