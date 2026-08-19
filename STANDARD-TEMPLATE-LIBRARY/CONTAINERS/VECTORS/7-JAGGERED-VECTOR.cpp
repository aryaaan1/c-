#include <iostream>
#include <vector>
using namespace std;
int main(){ 

vector<vector<int>>arr(4);
arr[0]=vector<int>(4);
arr[0]={1,2,3,4};
arr[1]=vector<int>(3);
arr[1]={1,2,3};
arr[2]=vector<int>(2);
arr[2]={1,2,};
arr[3]=vector<int>(1);
arr[3]={1};
for(int i=0 ; i<4 ; i++){
    for(int val : arr[i]){
       cout<<val<<" ";
}
cout<<endl;
}


// for(int i =0 ; i<4 ; i++){
//     for(int j = 0 ; j<arr[i].size() ; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

}