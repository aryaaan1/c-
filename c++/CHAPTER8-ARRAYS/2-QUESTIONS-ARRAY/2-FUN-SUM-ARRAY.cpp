#include<iostream>
using namespace std; 
void sum(int arr[]){
    int x=0;
    for(int i =1; i<=3;i++){
        // int a = arr[i];
        // x +=a;
         x +=arr[i];
    }
    cout<<x;
    


}
int main(){
    int arr[]={1,2,3,4};
    sum(arr);
    
}