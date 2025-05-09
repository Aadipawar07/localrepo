//Write a program to find the largest and smallest elements from an array.
#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	
	cout<<"Enter Number of elements : ";
	cin>>n;
	
	int arr[n];
	
	cout<<"\nEnter array element : ";
	for(i = 0;i<n;i++){
		cin>>arr[i];
	}
	int max=0;
	for(i = 1;i<n; i++){
		if(arr[i]>max)
			max = arr[i];
	}
	
	cout << max;
	
	
}
