#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"enter the number :";
    cin>>x;
   
    for(int i=1;i<=x*10;i=i+1){
        if(i%x==0)
        cout<<i<<endl;
    }
}