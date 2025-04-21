#include<iostream>
using namespace std;

int main(){
	
	int i,j,s;
	
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	for(i=1;i<=5;i++){
		
		for(s=2;s<=i;s++){
			cout<<"  ";
		}
		
		for(j=5;j>=i;j--){
			
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}








//5 4 3 2 1 1 2 3 4 5
//4 3 2 1     1 2 3 4 
//3 2 1         1 2 3
//2 1             1 2
//1                 1

