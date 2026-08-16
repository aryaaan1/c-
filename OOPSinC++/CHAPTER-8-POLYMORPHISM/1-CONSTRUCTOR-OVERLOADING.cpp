#include <iostream>
using namespace std;
class student{
    public:
    string name ;
    int id;
    int marks;
    // same name construction but parameterised differently
student (string name , int id ,int marks){
    this->name = name ;
    this->id = id ;
    this -> marks =marks;
}
student (string name , int id){
    this->name = name ;
    this->id = id;
}
};
 int main(){
    student s1("aryan",123,8);
    student s2("honda",657);
    cout<<s1.name;
 }