#include<iostream>
#include<String.h>
using namespace std;

class Student{
	public:
		int pass;
		char email[50];
		Student(char email[50],int pass){
			strcpy(this->email,email);
			this->pass = pass;
		}
		
		void login(){
			char email[50];
			int pass;
			cout<<"Enter your email :- ";
			cin>>email;
			cout<<"Enter your pass :- ";
			cin>>pass;
			if(strcmp(this->email,email) == 0 && this->pass == pass){
				cout<<"Successfully login";
		 }else{
		 	cout<<"Email and password not valide";
		 }
			
		}
};

main(){
	Student st1("jay@gmail.com",1234);
	st1.login();
	Student st2("heet@gmail.com",123);
}
