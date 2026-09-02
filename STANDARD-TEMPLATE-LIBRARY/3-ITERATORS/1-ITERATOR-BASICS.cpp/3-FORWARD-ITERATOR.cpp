#include<iostream>
#include<algorithm>
#include<vector>
#include<forward_list>
using namespace std;
int main(){
    // FORWARD LIST IS A SINGLE LINKED LIST 
    forward_list<int>nums;
    nums.push_front(10);
    nums.push_front(20);
    nums.push_front(30);

forward_list<int>::iterator it = nums.begin();
while (it != nums.end()){
    // cout<<*it<<" ";
    *it = (*it)+5;
    it++;
}
cout<<endl;
it = nums.begin();
while (it != nums.end()){
    cout<<*it<<" ";
    it++;
}
cout<<endl;


}   