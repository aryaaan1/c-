#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int x = 12344;
    cout<<sizeof(x)<<endl;
    string s=to_string(x);
    int n = s.length();
    cout<<s<<endl<<n<<endl;
    s +="aryan";
    cout<<s;

}