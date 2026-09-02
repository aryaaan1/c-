#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>nums;
     vector<int>s;
nums.push_back(8);
nums.push_back(88);
nums.push_back(888);
nums.push_back(8888);
nums.push_back(88888);

s.push_back(80);
s.push_back(81);
s.push_back(82);
s.push_back(8888);
s.push_back(84);

vector<int>::iterator it = nums.begin();
while(it!= nums.end()){
    cout<<*it<<" ";
    it++;
}
cout <<endl;
vector<int>::iterator its = s.begin();
while(its!= s.end()){
    cout<<*its<<" ";
    its++;
}


cout<<endl;






}