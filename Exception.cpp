//Write a program to demonstrate use of Exception Handling.
#include<iostream>
#include<string>
using namespace std;

int main(){
	int x,y;
	cout<<"Enter Two Numbers : ";
	cin>>x>>y;
	
	try{
		if(y==0){
			throw"Can't Devide with zero";
		}
		
		float sum = x/y;
		cout<<"Sum = "<<sum;
	}
	catch(const char *msg){
		cout<< msg;
	}
}
