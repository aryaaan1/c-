#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    
    int sum=0;
    int ld;
    do{

       
        ld = x%10;
        if(ld%2 ==0){
             x/=10;
             sum +=ld;
    
        }
        else
        x/=10;
        sum = sum +0;
        // find out more ways

   
    }
    while(x>0);
 
    cout<<sum;
    // do while loop use  kar raha kyuki 0 problem de rahaa hai







}