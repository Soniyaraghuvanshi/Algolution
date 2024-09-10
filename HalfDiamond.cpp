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
	for(i=n-1;i>0;i--){
		for(j=i;j>0;j--){
			cout<<"*";
		}
		for(k=1;k<n;k++){
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
