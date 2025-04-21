#include<iostream>
using namespace std;

main(){
	int a[50][50],i,j,row,col;
	int b[50][50];
	
	cout<<"materiz of A "<<endl;
	cout<<"Enter no of row :- ";
	cin>>row;
	cout<<"Enter no of column :- ";
	cin>>col;
	
	for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				cin>>a[i][j];
			}
		}
			
		cout<<"print materix "<<endl;
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		
		
	cout<<"materiz of B "<<endl;
	cout<<"Enter no of row :- ";
	cin>>row;
	cout<<"Enter no of column :- ";
	cin>>col;
	
	for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				cin>>b[i][j];
			}
		}
			
		cout<<"print materix "<<endl;
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"Sum of two materix"<<endl;
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				cout<<a[i][j] + b[i][j]<<" ";
			}
			cout<<endl;
		}

}
