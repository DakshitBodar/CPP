#include<iostream>
using namespace std;

class A{
	public:
		void name(){
			cout<<"BODAR"<<endl;
		}
	
};
class B:public A{
	public:
	void name1(){
			cout<<"DAKSHIT"<<endl;
		}
};
class C:public B{
	public:
	void name2(){
			cout<<""<<endl;
		}
};

main(){
	C c;
	c.name();
	c.name1();
	c.name2();
	
	
}
