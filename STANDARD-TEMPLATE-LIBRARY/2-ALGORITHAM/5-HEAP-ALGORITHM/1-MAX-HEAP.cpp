#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(65);
        arr.push_back(98);
            arr.push_back(655);
                arr.push_back(67777);
                    arr.push_back(67);

make_heap(arr.begin(),arr.end());
// for(int i : arr){
//     cout<<i<<" ";
// }cout<<endl;

//  it will not always give sorted heap it accts according to 
// tree

arr.push_back(66);
// for insertion in the heap 
push_heap(arr.begin(),arr.end());
// for(int k : arr){
//     cout<<k<<" ";
// }cout<<endl;

//  deletion
pop_heap(arr.begin(),arr.end());
for(int k : arr){
    cout<<k<<" ";
}cout<<endl;
// last digit goes to pop heap so we have to remove it 
arr.pop_back();
for(int k : arr){
    cout<<k<<" ";
}cout<<endl;

sort_heap(arr.begin(),arr.end());
for(int k : arr){
    cout<<k<<" ";
}cout<<endl;

}