#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int temp;
	int arr[5]={34,23,12,56,22};
	int n=5,i=0,j=n-1;
	while(i<n/2 && j>n/2){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;j--;
	}
	cout<<"array :";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
