#include<iostream>
using namespace std;
void print(int n){

    if(n==0)return;
    print(n-1);
     cout<<n<<endl;
}
int main(){
    int x;
    cout<<" enter the number x :";
    cin>>x;
    print(x);

    
}