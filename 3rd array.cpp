#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

	int m,n,s;
	int i=0,j=0,k=0;
	cout<<"enter the size of first array : ";
	cin>>m;
	cout<<"enter the size of second array : ";
	cin>>n;
	s=m+n;
	int A[m],B[n],C[s];
	cout<<"enter the elements of first array in sorted order :";
	for(int i=0;i<m;i++){
	cin>>A[i];
	}
	cout<<"enter the elements of second array in sorted order :";
	for(int i=0;i<n;i++){
	cin>>B[i];
	}
 

while(i<m && j<n){
	if(A[i]<B[j]){
		C[k]=A[i];
		k++;i++;
	}
	else{
		C[k]=B[j];
		k++;j++;
	}
	
}
while(i<m){
	C[k]=A[i];
	k++;i++;
}
while(j<n){
	C[k]=B[j];
	k++;j++;
}
cout<<"array :"<<endl;
for(int k=0;k<s;k++){
	cout<<C[k]<<endl;
}


}
