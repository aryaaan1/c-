#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class functorOne{
    public:
    // overloading
       bool operator()(int a, int b){
        // this will give desecnding order 
        return a>b;
       }

};
int main(){
    functorOne a;
    if(a(5,4) == true){
        cout<<"5 is greater number is 4";
    }
    else{
        cout<<" 10 is less than 5 ";
    }
    

}