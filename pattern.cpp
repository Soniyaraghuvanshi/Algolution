#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n,i,j,k;
	cout<<"enter the size :";
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			cout<<j;
		}
		for(k=0;k<i-1;k++){
			cout<<n;
		}
		cout<<"\n";
	}
}
