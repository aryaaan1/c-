#include <iostream>
#include <vector>
using namespace std;
int main(){ 
vector<int>vec;
vec.reserve(10);
vec.push_back(34);
vec.push_back(34);
vec.push_back(34);
// insert function
vec.insert(vec.begin(),38);
cout<<vec[0]<<endl;
vec.clear();
cout<<vec.size();

}