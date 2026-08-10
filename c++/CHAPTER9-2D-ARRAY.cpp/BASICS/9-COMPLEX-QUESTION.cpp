// given a matrix 'a' of dimenslon (n*m)and 2 coordinates (l1,r1)and (l2,r2)
// Return the sum of the rectangle from(l1,r1 to l2,r2).
#include<iostream>
using namespace std;
int main(){
    int sum =0;
    int arr[5][4]={1,2,3,4,5,9,10,11,6,12,13,14,7,15,16,17,8,18,19,20};
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<4 ; j++){
            if(i>=1 and i<=4 and j>=1 and j<=2){
                sum +=arr[i][j];
            }
        }
        cout<<endl;
    }
    cout<<sum;
    
}
