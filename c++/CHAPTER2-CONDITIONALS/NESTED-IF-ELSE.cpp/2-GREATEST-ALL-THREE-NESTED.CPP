#include<iostream>
using namespace std;
int main(){
    int ALU,KALU,BLU;
    cout<<"enter the number ALU:";
    cin>>ALU;
     cout<<"enter the number KALU:";
     cin>> KALU;
      cout<<"enter the number BLU:";
      cin>>BLU;
      if(BLU>KALU){
        if(BLU>ALU)
        cout<<"BLU IS THE GREATEST";
        else cout<<"ALU IS THE GREATEST";
      }

      else{
        if(ALU>KALU)
        cout<<"ALU IS THE GREATEST";
        else
         cout<<"KALU IS THE GREATEST";
      }
    }