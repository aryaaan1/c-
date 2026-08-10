#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number :";
    cin>>n;
    // for(int i=1;i<n;i++){
    //     if(n%i==0 and i==n/2)
    //     cout<<i<<endl;
    // }
    int f =1; 
    // store karenga highets factor
    
    for(int i=1;i<=n/2;i++){
        if(n%i==0) f=i;


    }
    cout<<f;
    }
    // loop n/2 tak chala lo uska baad tho koi nahi ayega

