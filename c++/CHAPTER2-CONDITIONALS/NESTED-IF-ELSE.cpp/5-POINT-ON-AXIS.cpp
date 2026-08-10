#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter x :";
    cin>>x;
    cout<<"enter  y :";
    cin>>y;
    if(x==0){
      if(y>0)
      cout<<"on posivite y axis";
      else
      cout<<"on negative y axis";
    }

    else if(y==0){
      if(x>0)
      cout<<"on posivite x axis";
      else
      cout<<"on negative x axis";
    }
     
     else if(x>0)
       if(y>0)
       cout<<" 1st quadrant";
       else
       cout<<"4th quadrant";

       else
       if(y>0)
       cout<<"2nd quadrant";
       else
       cout<<"3rd quadrant";

     
     }

     





