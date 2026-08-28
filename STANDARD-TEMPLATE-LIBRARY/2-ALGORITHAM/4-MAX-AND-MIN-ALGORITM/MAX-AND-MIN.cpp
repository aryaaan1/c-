#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int>arr;
    arr.push_back(55);
     arr.push_back(555555);
      arr.push_back(55555);
       arr.push_back(555);
        arr.push_back(5);


        int   a  = 4;
        int   b  = 5;
        cout<<max(a,b)<<endl;
        cout<<min(a,b)<<endl;
   
    auto it = max_element(arr.begin(),arr.end());
    cout<<*it<<endl;
    auto its = min_element(arr.begin(),arr.end());
    cout<<*its<<endl;
}