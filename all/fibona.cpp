#include<iostream>
using namespace std;

main(){
	
	int no1=0,no2=1,no3,i;
	cout<<no1<<" "<<no2<<" ";
	for(i=2;i<10;i++){
		no3=no1 + no2;
		cout<<no3<<" ";
		no1 = no2;
		no2 = no3;
	}
}
