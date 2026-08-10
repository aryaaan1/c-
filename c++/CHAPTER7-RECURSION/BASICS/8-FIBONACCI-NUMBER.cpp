#include<iostream>
using namespace std;
int fibonachi(int n){
    if(n==2 || n==1)return 1;
    return fibonachi(n-1) + fibonachi(n-2);
}
int main(){
    int x; 
    cout<< "enter the value : ";
    cin>> x;
  cout<<fibonachi(x);
}