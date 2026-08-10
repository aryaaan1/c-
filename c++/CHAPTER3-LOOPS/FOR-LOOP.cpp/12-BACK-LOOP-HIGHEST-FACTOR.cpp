#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number :";
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%i==0)
        cout<<i<<endl;
        break;        
        // to get out of loop
    }
}
    // // store karenga highets factor
       // int f =1; 
    // for(int i=n/2;i>=n/2;i--){
    //     if(n%i==0) f=i;


    // }
    // cout<<f;
    // }
    // loop n/2 tak chala lo uska baad tho koi nahi ayega

