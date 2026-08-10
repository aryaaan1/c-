#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int ld=0;
    int rev=0;


    do{
        ld = x%10;
        rev *=10;
        rev +=ld;
        x /=10;

     
    
    }
    while(x>0);
    
    cout<<rev;
   
   
}


