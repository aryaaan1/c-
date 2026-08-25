#include <iostream>
#include <vector>
using namespace std;
int main(){ 
vector<int>vec;
vec.reserve(10);
vec.push_back(34);
vec.push_back(34);
vec.push_back(34);
if(vec.empty() ==true){
    cout<<" it is a empty vector ";
}
else{
    cout<<"it is a not a empty vector ";
}

cout<<endl;
cout<<vec.at(0)<<endl;
cout<<vec.capacity();
cout<<vec.max_size();}