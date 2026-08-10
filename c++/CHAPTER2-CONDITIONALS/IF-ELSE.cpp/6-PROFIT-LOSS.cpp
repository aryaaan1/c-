#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter the cp :";
    cin>>cp;
    int sp;
    cout<<"enter the sp :";
    cin>>sp;
    if(sp>cp) {cout<<"profit"<<endl;

    cout<<sp-cp;}

    else if(sp<cp)
    {cout<<"loss"<<endl;
    cout<<cp-sp;}

    else
   {cout<<"no profit no loss";}
}

