#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER :";
    cin>>n;
    int r;
    cout<<"ENTER R: ";
    cin>>r;
    int a=1;
    for(int i=1;i<=n;i++){
         a *=i;
         cout<<endl;}
       
     int b=1;
      for(int i=1;i<=r;i++){
         b *=i;
         cout<<endl;}

    int c=1;
      for(int i=1;i<=n-r;i++){
         c *=i;
         cout<<endl;}
         
     cout<<a/(b*c);
       
   
}
