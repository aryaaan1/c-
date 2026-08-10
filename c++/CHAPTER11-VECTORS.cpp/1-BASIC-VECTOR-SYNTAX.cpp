#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3};
    cout<<vec[0]<<endl;
    vector<int>a(2,(1));
    // first value is size and another value gives vumber in
    // container
    for(int i =0 ;i<2 ; i++){
        cout<<a[i]<<" ";
    }
    
}