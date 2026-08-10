#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enetr first number n :";
    cin>>n;
    int m;
    cout<<"enter second number m :";
    cin>>m;
    n = n +m;
    m = n - m;
    n = n-m;
    cout<<n<<" "<<m;
}