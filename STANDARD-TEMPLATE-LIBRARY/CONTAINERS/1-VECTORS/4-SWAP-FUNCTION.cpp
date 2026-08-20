#include <iostream>
#include <vector>
using namespace std;
int main(){ 
vector<int>a;
vector<int>b;
a.push_back(45);
a.push_back(46);
a.push_back(47);
a.push_back(48);

b.push_back(451);
b.push_back(462);
b.push_back(473);
b.push_back(484);

a.swap(b);
for(int i : a){
    cout<<i<<endl;
}



}