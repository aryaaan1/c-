#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    
    int sum=0;
    do{
       int  ld = x%10;
      //  here if last digit is 1 10 goes 0 times to give the reminder 0
      // 1 very important
    x/=10;
    sum +=ld;
    
    }
    while(x>0);
 
    cout<<sum;
    // do while loop use  kar raha kyuki 0 problem de rahaa hai







}