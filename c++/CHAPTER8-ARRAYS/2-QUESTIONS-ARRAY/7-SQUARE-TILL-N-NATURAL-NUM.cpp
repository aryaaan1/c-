#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<"enter the number n : ";
cin>>n;
int arr [n];
// for(int i =0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
//  ya upeer wala code chlan ma dikkat kyu arahi ahi
for(int i =0;i<n;i++){
 arr[i]=(i+1)*(i+1);
cout<<arr[i]<<" ";


}

}