#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>arr(6);
vector<int>brr(6);
bool checkeven(int a){
   return a%2==0;
}
int main(){
arr[0]= 10;
arr[1]= 20;
arr[2]= 3;
arr[3]= 40;
arr[4]= 5;
arr[5]= 60;

// brr[0]= 10;
// brr[1]= 10;
// brr[2]= 20;
// brr[3]= 20;
// brr[4]= 20;
// brr[5]= 60;
// cout<<"before"<<endl;
// for(int it : arr){
//     cout<<it<<" ";
// }
// cout<<endl;

// cout<<"after"<<endl;
// rotate(arr.begin(),arr.begin()+3,arr.end());
// for(int it : arr){
//     cout<<it<<" ";
// }
// cout<<endl;


// auto it = unique(brr.begin(),brr.end());
// // it iterator ka pehle sara elments daal deta hai
// // it ka baad sara duplicate elements hota hai
// brr.erase(it,brr.end());
// for (int s : brr){
//     cout<<s<<" ";
// }
// cout<<endl;

auto iter = partition(arr.begin(),arr.end(),checkeven);
// even number comes before the it (iterator )than other words
arr.erase(iter,arr.end());
for(int a : arr){
    cout<<a<<" ";
}
}

    