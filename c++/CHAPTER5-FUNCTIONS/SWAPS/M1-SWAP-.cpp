#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<" enetr first number n :";
    cin>>n;
    int m;
    cout<<"enter second number m :";
    cin>>m;
    int temp = n;
    n = m ;
    m = temp;
    cout<<n<<" "<<m;

}