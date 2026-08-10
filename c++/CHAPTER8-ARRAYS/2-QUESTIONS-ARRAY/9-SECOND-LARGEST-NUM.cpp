#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
    int arr[]={1,3,8,4,0};
    int n =sizeof (arr)/4;
    int mx=arr[0];
    for(int i =1;i<n;i++){
    mx =max(arr[i],mx);
    }
    cout<<mx<<" is the greatest of all";
    cout<<endl;
    //   z=arr[0];
    // for(int j =1;j<n;j++){
    // if(arr[j]>z and arr[j]<mx) z = arr[j];
int smx = arr[0];
for(int i =1;i<n;i++){
     mx =max(arr[i],mx);
     if(arr[i] != mx) smx = max(arr[i],smx);
    

    }
      cout<<smx<<" is the second largest number ";
  
}
   
    
   
   

