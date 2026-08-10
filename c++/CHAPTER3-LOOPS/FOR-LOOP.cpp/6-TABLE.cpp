#include<iostream>
using namespace std;
int main (){
    int x;
    cin>>x;
    // for(int i=0;i<x;i=i+19){
    // cout<<i<<endl;
    // }
    for(int i=19;i<=x;i=i+19){
        if(i%19==0)
        cout<<i<<endl;
    }
}