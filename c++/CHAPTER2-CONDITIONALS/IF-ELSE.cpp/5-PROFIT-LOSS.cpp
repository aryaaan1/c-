#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter the cp :";
    cin>>cp;
    int sp;
    cout<<"enter the sp :";
    cin>>sp;
    if(sp-cp>0) {cout<<"profit"<<endl;
        // sp>cp ya bhi lagaka ho jata

    cout<<sp-cp;}


    if(sp-cp<0)
    {cout<<"loss"<<endl;
    cout<<cp-sp;}
    
    if(sp-cp==0)
    {cout<<"nor profit nor loss";}
    // can't use else cause it will print in all the syntax you will enetr cout 
   
}

