#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    vector<int>brr;
    arr.push_back(65);
        arr.push_back(98);
            arr.push_back(655);
                arr.push_back(67777);
                    arr.push_back(67);

     brr.push_back(66);
        brr.push_back(98);
            brr.push_back(65);
                brr.push_back(67);
                    brr.push_back(678);                

 vector<int>result;

//  sorting needs to done for favourable outcome
 sort(arr.begin(),arr.end());
 sort(brr.begin(),brr.end());

// pehele wale ka hi bacha hua ayega 
 set_difference(arr.begin(),arr.end(),brr.begin(),brr.end(),inserter(result,result.begin()));
 for(int i : result){
    cout<<i<<" ";
 }cout<<endl;
}