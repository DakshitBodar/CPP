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
			cout<<" Gread A+"<<endl;
			cout<<" Excellent eork!";
			break;
			
		case 2:
			cout<<" Gread A"<<endl;
			cout<<" Excellent eork!";
			break;
		
		case 3:
			cout<<" Gread B+"<<endl;
			cout<<" Well Done";
			break;
			
		case 4:
			cout<<" Gread B"<<endl;
			cout<<" Well Done";
			break;
			
		case 5:
			cout<<" Gread C"<<endl;
			cout<<" Good job";
			break;
			
		case 6:
			cout<<" Gread D"<endl;
			cout<<" You are passed,But you could dobetter";
			break;
			
		case 7:
			cout<<" Sorry,you are failed";
			break;
				
			
	
	}

}
