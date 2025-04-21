#include<iostream>
using namespace std;

main(){
    int marks;

    cout<<"Enter your marks :- ";
    cin>>marks;
    
    if(marks>=0 && marks<=100){
    	if(marks>=90){
    		cout <<"Grade: A+" << endl;
            cout <<"Congratulations! You are eligible for the next level."<<endl;
		}
		else if(marks>=80){
			cout <<"Grade: A" << endl;
            cout <<"Congratulations! You are eligible for the next level."<<endl;
		}
		else if(marks>=70){
		    cout << "Grade: B+" << endl;
            cout << "Congratulations! You are eligible for the next level."<<endl;
		}
		else if(marks>=60){
			cout << "Grade: B" << endl;
            cout << "Congratulations! You are eligible for the next level."<<endl;
		}
		else if(marks>=50){
			cout << "Grade: C" << endl;
            cout << "Congratulations! You are eligible for the next level."<<endl;
		}
		else if(marks>=40){
			cout << "Grade: D" << endl;
            cout << "Congratulations! You are eligible for the next level."<<endl;
		}else if(marks>33){
			cout << "Grade: F"<<endl;
            cout << "Please try again next time."<<endl;
		}
	}else{
		cout<<"Invalid marks Enter 0 and 100."<<endl;
	}
}
    
  
