#include<iostream>
using namespace std;
int sum(int n){
    if(n==1)return 1;
    return n + sum(n-1);
}


int main(){
    int x; 
    cout<< "enter the value : ";
    cin>> x;
  cout<<sum(x);
}