#include<iostream>
#include<stdlib.h>

using namespace std;

void pattern(int n){
	int i,j,k;
	for(i=1;i<=n;i++){
	for (j=i;j<n;j++){
			cout<<" ";
		}
	for(k=1;k<=(2*i - 1);k++){
			
			cout<<"*";
		}
		cout<<"\n";
	}
	for(i = n - 1; i >= 1; i--){
		for(j = n; j > i; j--){
			cout<<" ";
		}
		for(k = 1;k<= (2 * i - 1);k++){
			cout<<"*";
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
