#include<iostream>
using namespace std;
int main(){
    int x=2,y=3;
    cout<<x<<" "<<y<<endl;
    int* p= &x;
    int* z= &y;
    
    cout<<*z<<" "<<*p;


}