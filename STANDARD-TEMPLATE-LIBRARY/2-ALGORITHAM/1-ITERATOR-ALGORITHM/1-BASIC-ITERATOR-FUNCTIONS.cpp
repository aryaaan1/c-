#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>arr(4);

void doublekar(int a){
    cout<<a*2<<" ";
}

bool checkeven(int a){
    return a%2 == 0 ;
}

int main(){
arr[0]= 1;
arr[1]= 4;
arr[2]= 3;
arr[3]= 4; 

//  FOR EACH 
for_each(arr.begin(),arr.end(),doublekar);
cout<<endl;
// int target = 4;
int target = 3;


//  FIND
auto it = find(arr.begin(),arr.end(),target);
    cout<<*it<<endl;

    
//  FIND-IF
// auto its =find_if(arr.begin(),arr.end(),checkeven); 
// cout<<*its<<endl;


//  COUNT
int targets = 4;
int ans = count(arr.begin(),arr.end(),targets);
cout<<ans;
cout<<endl;


// COUNT-IF
int answer = count_if(arr.begin(),arr.end(),checkeven);
cout<<answer<<endl;


// SORT
sort(arr.begin(),arr.end());
for(int a : arr){
    cout<<a<<" ";
}

cout<<endl;

// REVERSE
reverse(arr.begin(),arr.end());
for(int a : arr){
    cout<<a<<" ";
}



}


