//Write a program to demonstrate use of binary operator overloading.
#include<iostream>
using namespace std;

class Number{
	private:
		int num;
	
	public:
		 Number() {
        num = 0;
    }
		Number(int x){
			num = x;
		}
		void display(){
			cout <<"\nValue = "<<num;
		}
		Number operator+(Number n){
			Number temp;
			temp.num = num + n.num;
			return temp;
		}
};

int main(){
	Number num1(10),num2(20),result;
	cout<<"\nNumber-1 : ";
	num1.display();
	
	cout<<"\nNumber-2 : ";
	num2.display();
	
	result = num1+num2;
	
	
	cout<<"\nSum : ";
	result.display();
	
}
