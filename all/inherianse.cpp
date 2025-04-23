#include<iostream>
using namespace std;

class A{
	public:
		void circle(){
			int r;
			cout<<"Enter Circle Radius :- ";
			cin>>r;
			
			cout<<"circle radius :- "<<3.14*r*r<<endl;
		}
};

class B:public A{
	public:
		void traingle(){
			int b,h;
			cout<<"Entyer tringle base :- ";
			cin>>b;
			cout<<"Entyer tringle height :- ";
			cin>>h;
			cout<<"Tringle Area :- "<<0.5*b*h<<endl;
			
		}
};

main(){
	B b;
	b.circle();
	b.traingle();
}

