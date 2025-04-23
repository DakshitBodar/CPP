#include<iostream>
using namespace std;

class arithmatic{ //create class
	public:	  //access modifires
		void sum(){	  //member functions
			int a,b;	//data member
			cout<<"Enter no A :- ";
			cin>>a;
			cout<<"Enter no B :- ";
			cin>>b;
			cout<<"Sum :- "<<a+b<<endl;
		
		}
		
		void min(){	  //member functions
			int a,b;	//data member
			cout<<"Enter no A :- ";
			cin>>a;
			cout<<"Enter no B :- ";
			cin>>b;
			cout<<"Min :- "<<a-b<<endl;
		
		}
};

main(){
	arithmatic ar;  //create class object
	ar.sum();	//call function within class
	ar.min();	//call function within class
}
