#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
 vector<int>arr;
 vector<int>t(5);
int main(){
  
   arr.push_back(1);
   arr.push_back(2);
   arr.push_back(3);
   arr.push_back(4);
   vector<int>a(arr.size());

  partial_sum(arr.begin(),arr.end(),a.begin());
 for(int it : a){
    cout<<it<<" ";
}
cout<<endl;

iota(t.begin(),t.end(),250);
for(int it : t){
    cout <<it <<" ";
}

}