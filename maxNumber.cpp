#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int n;
	cout<<"inter the size of array : "<<endl;
	cin>>n;
	cout<<"inter the elements of array  :"<<endl;
	int arr[n],max;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	max=arr[0];
	for(int i=1;i<n;i++){
		if(max<=arr[i]){
			max=arr[i];
		}
		
	}
	cout<<"maximum number = "<<endl;
	cout<<max;
	
	return 0;
}
