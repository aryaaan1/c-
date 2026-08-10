#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number :";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
        cout<<"it is a composite number"<<endl;}
        else
        cout<<"it is a prime number";
        break;
    }
}
// n/2 tak bhi chalata