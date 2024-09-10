#include<iostream>
#include<stdlib.h>

using namespace std;

void pattern(int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			cout<<"*";
		}
		for(k=n-1;k>0;k--){
			cout<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	int n;
	cout<<"enter the size :";
	cin>>n;
	pattern(n);
}
