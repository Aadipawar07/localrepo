//Write a program to calculate the factorial of a number using recursion
#include<iostream>
using namespace std;

int Factorial(int n){
	if(n == 0 || n == 1)
		return 1; 
	
	return n * Factorial(n-1);
}
int main(){
	int num;
	cout<<"Enter Number : ";
	cin>>num;
	
	if(num<0)
		cout<<"Factorial is not defined for negative number"<<endl;
	else
		cout<<Factorial(num);	
}
