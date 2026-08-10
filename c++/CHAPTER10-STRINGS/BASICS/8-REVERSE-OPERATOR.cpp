#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "aryan";
    cout<<s;
    cout<<endl;
    cout<<endl;
    int n = s.length();
    reverse(s.begin(),s.end());
    cout<<s;


}