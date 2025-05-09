//Write a program to demonstrate use of File Handling.
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream out("file.txt");
	out << "Hello File!\n";
	out << "second line\n";
	out.close();
	
	ifstream in("file.txt");
	string line;
	while(getline(in,line))
		cout<<line<<endl;
	in.close();
}
