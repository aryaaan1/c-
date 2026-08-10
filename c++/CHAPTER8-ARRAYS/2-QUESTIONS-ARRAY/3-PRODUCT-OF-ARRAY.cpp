#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,12,4,5};
    int n =sizeof (arr)/4;
    int x=1;
    for(int i =0;i<n;i++){
       int  a = arr[i];
       x *=a;
        
    }
    cout<<x;



}