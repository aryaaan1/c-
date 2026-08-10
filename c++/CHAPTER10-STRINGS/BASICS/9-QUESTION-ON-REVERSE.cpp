#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    string s = "aryana";
    cout<<s;
    cout<<endl;
    cout<<endl;
    int n = s.length();
    reverse(s.begin()+2,s.begin()+5);
    cout<<s;


}