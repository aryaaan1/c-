#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the number ";
    cin>>n;
    int ch;
   
   
    for(int i=65; i<=n+64; i++){
        for(int j=65;j<=i;j++){
            char ch =(char)j;
            cout<<ch<<" ";

        }
        cout<<endl;
    }

}