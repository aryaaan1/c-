#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int l;

    do{
         l = x%10;
    
    x/=10;
     cout<< l;
    
    }
    while(x>0);
 
   
   
}


