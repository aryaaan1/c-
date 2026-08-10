#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a=0;
    int n;
    cout<< " enter the numebr of elements required in array :";
    cin>>n;
    int arr[n];
    cout<< " enter n values :";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int k;
    cout<< " select the number position counting wise (from 1 ) you want to be taken to find numbers greater than it : ";
    cin>>k;
    int mx=arr[k-1];
    for(int i =0;i<n;i++){
      if(arr[i]>mx) {
        mx=arr[i];
         a +=1;
      }
   
    }
    cout<<"number of elements greater the given number is "<< a;
}