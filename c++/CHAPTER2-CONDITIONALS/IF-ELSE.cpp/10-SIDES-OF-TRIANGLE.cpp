#include<iostream>
using namespace std;
int main(){
     int a;
     int b;
     int c;
     cout<<"eneter a :";
     cin>>a;
     cout<<"eneter b :";
     cin>>b;
     cout<<"eneter c :";
     cin>>c;
     if(a+b>=c)
     if(a+c>=b)
     if(b+c>=a)
     cout<<"these can be side of triangle";
     else cout<<"these can't be sides of triangle";
}
// if(a+b>c and b+c>a and a+c>b) ya bhi chalta operation ka bich ma bracket laga dena saftey
// ka lia