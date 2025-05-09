//Write a program to demonstrate the use of pointers to functions
#include<iostream>
using namespace std;

void greet(){
	cout<<"Hello World";
}

int main(){
	void (*functPtr)();
	functPtr = &greet;
	functPtr();
}
