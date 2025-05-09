//Write a program to demonstrate the use of different types of constructors and a destructor in a class
#include<iostream>
using namespace std;

class Demo{
	public : 
		int x;
	
	Demo(){
		cout<<"\nDefault Constructor Called";
	}
	
	Demo(int a){
		cout<<"\nParameterized Constructor Called";
	}
	
	Demo(Demo &d){
		cout<<"\nCopy Constructor Called";
	}
	~Demo(){
		cout<<"\nDestrucotr Called ";
	}
};

int main(){
	Demo obj1,obj2(10),obj3(obj1);
	
	return 0;
}
