#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    
    int product=1;
    int ld;
    do{
        ld = x%10;
    x/=10;
    product *=ld;
    
    }
    while(x>0);
 
    cout<<product;
    // do while loop use  kar raha kyuki 0 problem de rahaa hai







}