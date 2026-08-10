#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++ ){
    // if(i!=3 and i!=8)
    if(i==3 or i==8) continue;
    cout<<i<<" ";
    }

   
}