// Given an array of integers, change the value of all odd-indexed elements to its second multiple and increment all even-indexed values by 10. 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int arr[]={1,3,8,4,0};
     int n = sizeof(arr)/4;
     for(int i=0;i<n;i++){
        if(i%2 ==0)
        cout<<arr[i]+10<<" ";
        else
        cout<<arr[i]*2<<" ";
     }



}