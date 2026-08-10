#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the number ";
    cin>>n;
   int ch;
    for(int i=65; i<=68; i++){
        for(int j=1;j<=n;j++){
            char ch =(char)i;
            cout<<" ";
            cout<<ch;
        }
        cout<<endl;
    }

}