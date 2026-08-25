#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
   vector<int>arr;
   vector<int>a;
   vector<int>b;
   arr.push_back(45);
   arr.push_back(40);
   arr.push_back(55);
   arr.push_back(45);

// ACCUMULATE - SUM 

int ans = accumulate(arr.begin(),arr.end(),0);
cout<<ans<<endl;


//  INNER PRODUCT
 
   a.push_back(1);
   a.push_back(2);
   a.push_back(3);

   b.push_back(3);
   b.push_back(4);
   b.push_back(5);

   int answer = inner_product(a.begin(),a.end(),b.begin(),0);
   cout<<answer;





}