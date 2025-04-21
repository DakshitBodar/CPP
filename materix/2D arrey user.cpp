#include<iostream>
using namespace std;

main(){
	int a[50][50],b[50][50],row,col;
	int i,j,check=0;
	
	cout<<"Enter no of row :- ";
	cin>>row;
	cout<<"Enter no of column :- ";
	cin>>col;
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
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
