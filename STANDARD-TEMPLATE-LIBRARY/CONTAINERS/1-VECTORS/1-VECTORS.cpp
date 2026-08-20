#include <iostream>
#include <vector>
using namespace std;
int main(){ 
vector<int>vec;
vec.push_back(0);
cout<<vec[0]<<endl;
vec.push_back(1);
cout<<vec[1]<<endl;
vec.push_back(6);
cout<<vec[2]<<endl;
cout<<vec.size()<<endl;
vec.pop_back();
cout<<vec.size()<<endl;
// its a type of iterator which tells that the location 
// of the iterator is at first place 
cout<<*(vec.begin())<<endl;
cout<<*(vec.end())<<endl;

}