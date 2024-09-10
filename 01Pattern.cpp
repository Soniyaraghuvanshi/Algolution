#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int i,j,n;
	cout<<"enter the size :";
	cin>>n;
	
	for( i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0 || i==n-1 || j==0 || j==n-1){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
			
		}
		cout<<"\n";
	}
	return 0;
}
