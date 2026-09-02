#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main(){
    // FORWARD LIST IS A SINGLE LINKED LIST 
    vector<int>nums = {3,4,5,6};
    // nums.push_back(10);
    // nums.push_back(20);
    // nums.push_back(30);

vector<int>::iterator it = nums.begin();
while (it != nums.end()){
     *it = (*it)+5;
    cout<<*it<<" ";
     it++;
}
cout<<endl;
// isma first wala print nahi ho payga
it = nums.end()-1;
while (it != nums.begin()){
    cout<<*it<<" ";
     it--;
}
cout<<endl;

// METHOD 2 
it = nums.end();
while (it != nums.begin()){
       it--;
    cout<<*it<<" ";
  
}
cout<<endl;



}