#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class comparator{
    public:
    bool operator()(int a, int b){
        return a>b;
    }


};
int main(){

    vector<int>arr = {10,20,30,40};
    sort(arr.begin(),arr.end(),comparator());
    for ( int a : arr){
        cout<<a <<" ";
    }

}