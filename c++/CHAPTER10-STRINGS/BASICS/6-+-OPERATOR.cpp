#include<iostream>
using namespace std;
int main(){
string s={"aryan"};
cout<<s;
cout<<endl;
cout<<s.length();
cout<<endl;
// s +=" garg";
s = "garg  "+s;
cout<<s<<endl<<s.length();
}