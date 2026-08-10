#include <iostream>
using namespace std;
int fact(int x){
    int a =1;
    for(int i=1;i<=x;i++){
        a *=i;
       
    }
   return a;
}

int comb(int s , int q){
   return fact(s)/( fact(q)*fact(s-q));
}

int main(){
    int r;
    cout<<" enter the num ber r :";
    cin>>r;
    for(int i=0;i<=r;i++){
        for(int j =0;j<=r-i;j++)
        cout<<"  ";
         for(int j=0;j<=i;j++){
        cout<<comb(i,j)<<"   ";
         }

    cout<<endl;
    }
}