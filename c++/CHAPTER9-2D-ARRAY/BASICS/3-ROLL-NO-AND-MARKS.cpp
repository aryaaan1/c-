#include<iostream>
using namespace std;
int main(){
     int arr[4][2]={{12,34},{13,45},{14,78},{15,98}};
    // int arr[4][2]={12,34,13,45,14,78,15,98};
    for(int i =0 ;i<4 ; i++){
        for(int  j = 0;j<2 ; j++){
            cout<<arr[i][j]<<" ";
        }
          cout<<endl;
    }
  
}