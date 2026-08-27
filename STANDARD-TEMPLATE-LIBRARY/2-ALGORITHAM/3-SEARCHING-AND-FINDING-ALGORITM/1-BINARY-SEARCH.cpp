#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(45);
     arr.push_back(50);
      arr.push_back(55);
       arr.push_back(60);
int target = 45;
bool it = binary_search(arr.begin(),arr.end(),target);
cout<<it;


}
