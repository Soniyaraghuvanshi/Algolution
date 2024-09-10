#include<iostream>
#include<stdlib.h>

using namespace std;

int palindrome(int a[],int n){
	
	int i=0,j=n-1;
	while(i<j){
		if(a[i]!=a[j]){
			return 0;
		}
		i++;j--;
	} 
	return 1;
}
int main(){
	int a[]={44,56,45,45,56,44};
	int n=6;
if(palindrome(a,n)){
	cout<<"this array is palindrome";
}
else
{
	cout<<"this array is not palindrome";
}
	
	
}
