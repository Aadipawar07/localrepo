//Write a program to demonstrate use of unary operator overloading.
#include<iostream>
using namespace std;

class Number{
	private:
		int num;
	
	public:
		Number(int x){
			num = x;
		}
		void display(){
			cout <<"\nValue = "<<num;
		}
		operator++(){
			++num;
		}
};

int main(){
	Number obj(10);
	cout<<"\nBefore increment : ";
	obj.display();
	
	++obj;
	cout<<"\nAfter increment : ";
	obj.display();
	
}
