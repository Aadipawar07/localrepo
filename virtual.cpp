//Write a program to demonstrate use of virtual function.
#include<iostream>
using namespace std;

class Base{
	public:
		virtual void show(){
			cout<<"Hello, This is Base Class"<<endl;
		}
};

class Derived : public Base{
	public:
		void show(){
			cout<<"Hello, This is Derived Class"<<endl;
		}
};

int main(){
	Base *ptr;
	Derived obj;
	
	ptr = &obj;
	
	ptr ->show();
	
	return 0;
}
