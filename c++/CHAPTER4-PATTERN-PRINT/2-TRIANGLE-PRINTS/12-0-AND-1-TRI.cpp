#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the number ";
    cin>>n;
     
for(int i=1 ;i<=n ; i++){
   if(i%2!=0)
    for(int j=1 ;j<=i ;j++){
        if(j%2!=0)
        cout<<true<<" ";
        else
        cout<<false<<" ";
    }

    else
     for(int j=1 ;j<=i ;j++){
        if(j%2!=0)
        cout<<false<<" ";
        else
        cout<<true<<" ";
     }


    cout<<endl;
}

}