//Write a program to concatenate two strings and find the length of a string
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str1,str2,result;
	
	cout<<"Enter First String : "<<endl;
	cin>>str1;
	
	cout<<"Enter Second String : "<<endl;
	cin>>str2;
	
	result = str1 + str2;
	
	cout<<"Result : "<<endl;
	cout<<result;
}
//only above code 
int main(){
	char str1[100],str2[100],result[200];
	
	cout<<"Enter First String : "<<endl;
	cin.getline(str1,100);
	
	cout<<"Enter Second String : "<<endl;
	cin.getline(str2,100);
	
	strcpy(result,str1);
	strcat(result,str2);
	
	cout<<"Result : "<<endl;
	cout<<result;
}
