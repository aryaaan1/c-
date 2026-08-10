#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int x = 12344;
    string s=to_string(x);
    int n=s.length();
    int count = 0;
    for(int i =0 ; i<n ; i++){
        count +=1;
    }
    cout<<count;


}