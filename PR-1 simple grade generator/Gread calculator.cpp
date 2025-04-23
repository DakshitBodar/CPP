#include<iostream>
using namespace std;

main(){
	int marks,no;
	cout<<"Enter Your Marks";
	cin>>marks;
	
	if(marks >= 90){
		no=1;
	}else if(marks >=80 && marks < 90){
		no=2;
	}else if(marks >=70 && marks < 80){
		no=3;
	}else if(marks >=60 && marks < 70){
		no=4;
	}else if(marks >=50 && marks < 60){
		no=5;
	}else if(marks >=40 && marks < 50){
	    no=6;
	}else{
		no=7;
	}
	
	switch(no){
		case 1:
			cout<<"A1 Grade";
			break;
			
		case 2:
			cout<<"A2 Grade";
			break;
		
		case 3:
			cout<<"B1 Grade";
			break;
			
		case 4:
			cout<<"B2 Grade";
			break;
			
		case 5:
			cout<<"C Grade";
			break;
			
		case 6:
			cout<<"D Grade";
			break;
			
		case 7:
			cout<<"Beter luck next time";
			break;
				
			
		default:
			cout<<"Fail";
	}

}
