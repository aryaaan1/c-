#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(45);
     arr.push_back(50);
      arr.push_back(65);
       arr.push_back(70);

       auto it = lower_bound(arr.begin(),arr.end(),60);
       cout<<*it;








}