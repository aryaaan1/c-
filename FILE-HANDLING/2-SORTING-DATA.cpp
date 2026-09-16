#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
vector<int>arr(5);
cout<<" enter the number ";
for(int i =0; i<5 ;i++){
    cin>>arr[i];
};
ofstream fout;
fout.open("zero.txt");
fout<<" before sorting\n";
for(int i = 0 ;i<5;i++){
    fout<<arr[i]<<" ";};
fout<<"\n after sorting\n";
sort(arr.begin(),arr.end());
for (int i : arr){
    fout<<i<<" ";
}

fout.close();

}