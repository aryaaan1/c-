#include<iostream>
using namespace std;
int power(int a ,int b){
if(b==0)return 1 ;
return a * power(a,b-1);
}

int main(){
    int x; 
    cout<< "enter the base value : ";
    cin>> x;
    int y; 
    cout<< "enter the power value : ";
    cin>>y;
  cout<<x<<" raise to the power "<<y<<" is "<<power(x,y);
}