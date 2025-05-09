#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int num = 50;
	int *ptr;
	int **ptr2;
	
	ptr = &num;
	ptr2 = &ptr;
	
	cout<<num;
	cout<<*ptr;
	cout<<**ptr2;
	
	
	return 0;
}
