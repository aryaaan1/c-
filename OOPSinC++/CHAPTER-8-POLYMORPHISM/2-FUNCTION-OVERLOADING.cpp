#include <iostream>
using namespace std;
class student{
    public:
    // same name but differently parameterised 
    void sum(int a , int b){
        cout<<a+b<<endl;
    }

    void sum(int a, int b , int c){
        cout<<a+b+c<<endl;
    }
    void sum(string s,string a){
        cout<<s+a<<endl;
    }
    // this will give error because parameters are same even
    // even though data type is different 
    // int sum(int a,int b)(
    //     return a+b;
    // )

    int sum(int a ,int b,int c,int d){
        return a+b+c+d;
    }
};
int main(){ 
    student s1;
    s1.sum(3,4);
    s1.sum(7,6,8);
    s1.sum("aryan","kumar");
}