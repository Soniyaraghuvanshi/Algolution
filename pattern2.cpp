#include<iostream>
using namespace std;

int main(){
    int n=5,i,j;
    for(i=0;i<n;i++){
        if(i%2==0){
        for(j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
        }
        else{
            for(j=n;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
        }
    }
    return 0;
}
