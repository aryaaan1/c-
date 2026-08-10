#include<iostream>
using namespace std;
int main(){
    int arr[10];
     cout<<"enter the elemnts of array  : ";
    for(int i=0;i<=9;i++){
        cin>>arr[i];
    }
      for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    // upadation of variable
    arr[0]=100;
     for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";
        
    }

}