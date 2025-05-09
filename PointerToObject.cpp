//Write a program to create pointers that point to objects and access their members
#include<iostream>
#include<string>
using namespace std;

class Student{
	public:
		string name;
		int age;
		
		void display(){
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
		}
};

int main(){
	Student s1;
	Student *ptr;
	ptr = &s1;
	
	ptr->name = "Ayush";
	ptr->age = 20;
	
	ptr-> display();
}
