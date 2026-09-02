#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main(){
    // FORWARD LIST IS A SINGLE LINKED LIST 
    list<int>nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

list<int>::iterator it = nums.end();
while (it != nums.begin()){
    it--;
    cout<<*it<<" ";
}
cout<<endl;


}