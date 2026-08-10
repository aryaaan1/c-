#include<iostream>
using namespace std;
int main(){
    int a[]={1,3,12,4,5};
    int n =sizeof (a)/4;
    int b[n];
    for(int i =0 ; i<n ; i++){
       int j=n-1-i;
        // b[i]=a[j];
        b[i]=a[n-1-i];
        cout<<b[i]<<" ";
    }
    // for(int i=0 ; i<n; i++){
    //     cout<<b[i]<<" ";
    }
