#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,33,44,55,66,8,99,100,45};
    int mx =arr[0][0];
    for(int i =0 ; i<3 ; i++){
        for( int j =0 ; j<3 ; j++){
            if(arr[i][j]>mx) mx=arr[i][j];
        }
    }
    cout<<mx;
}