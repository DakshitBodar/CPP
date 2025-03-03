#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	private:
		char name[50];
		int age,salary;
		
	public:
		//setter
		void setuser(char n[50],int ag,int s){
			strcpy(name,n);
			age = ag;
			salary = s;
		}
		//getter
		void getuser(){
			cout<<"Name :- "<<name<<endl;
			cout<<"Age :- "<<age<<endl;
			cout<<"Salary :- "<<salary<<endl;
		}
};


main(){
	Employee e,e1,e2;
	
	e.setuser("Raj",20,5000);
	e.getuser();
	
	e1.setuser("karmit",21,4500);
	e1.getuser();
	
	e2.setuser("vivek",22,4600);
	e2.getuser();
	
}
