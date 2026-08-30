#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>nums;
nums.push_back(8);
nums.push_back(88);
nums.push_back(888);
nums.push_back(8888);
nums.push_back(88888);


vector<int>::iterator it = nums.begin();
while(it!= nums.end()){
    cout<<*it<<" ";
    it++;
}

cout<<endl;

}
