#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[]={1,3,8,4,0};
    int n =sizeof (arr)/4;
    int mx=arr[0];
    for(int i =1;i<n;i++){
    //   if(arr[i]>mx) mx=arr[i];
    mx =max(arr[i],mx);
    }
    cout<<mx;
}