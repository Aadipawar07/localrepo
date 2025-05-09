//Write a program to allocate and deallocate memory dynamically using pointers.
#include<iostream>
using namespace std;

int main(){
	int *ptr;
	
//	ptr = new int;
//	if(!ptr){
//		cout<<"Memory allocation failed ";
//		return 1;
//	}
	
	*ptr = 50;
	cout << "Value Stored at : "<<&ptr<<endl;
	
	delete ptr;
	
	cout<<"Memory deallocated "<<endl;
}
