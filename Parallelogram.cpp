#include<iostream>
using namespace std;

int main(){
    
    int n,i,j,k;
    cout<<"enter the size :";
    cin>>n;
    
    for (int i = 1; i <= n; i++) {

        for (int j = i; j < n; j++) {
            cout << " ";
        }
       
        for (int j = 1; j <= 5; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
