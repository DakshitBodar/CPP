#include<iostream>
using namespace std;

main(){
	int a[50][50]={1,2,3},b[50][50]={1,2,3};
	int i,j,check=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j] != b[i][j]){
				check = 1;
				break;
			}
			
		}
		
	}
	
	if(check == 1){
		cout<<"Both materix are not same";
	}else{
		cout<<"Both materix are same";
	}
}
