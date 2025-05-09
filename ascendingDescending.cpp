//Write a program to sort an array in ascending and descending order
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
	
	int counter = 1;
	while(counter<n){
		for(int i =0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		counter++;
	}
	
	for(i = 0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	
	counter = 1;
	while(counter<n){
		for(int i =0;i<n-counter;i++){
			if(arr[i]<arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		counter++;
	}
	
	for(i = 0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
