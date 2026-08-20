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

vector<int> ::iterator it = a.begin();
 while(it != a.end()){
    cout<< *it <<endl;
    it++;
 }


}