#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the number ";
    cin>>n;
   int ch;
    for(int i=1; i<=n; i++){
        for(int j=97;j<=100;j++){
            char ch =(char)j;
            cout<<" ";
            cout<<ch;
        }
        cout<<endl;
    }

}