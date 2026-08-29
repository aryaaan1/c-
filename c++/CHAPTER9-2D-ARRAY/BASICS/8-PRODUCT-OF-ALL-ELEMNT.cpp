#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,1,1,1,1,1,1,12,3};
    int product =1; 
    for (int i=0;i<3 ; i++){
        for(int j =0 ;j<3 ; j++){
            product *=arr[i][j];
        }
    }
    cout<<product;

  
  
    
}