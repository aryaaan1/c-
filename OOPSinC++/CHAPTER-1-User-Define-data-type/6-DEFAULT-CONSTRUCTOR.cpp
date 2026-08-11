#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    float gpa;
    // default constructor
    Student(){

}
    //  parmeterised constructor 
Student(string s, int r,float g){
    name = s;
    rollno = r;
    gpa = g;
}
};
 int main(){
Student s1("aryan",21,8.5);{
    // over write
    s1.name ="vaibahv";
    cout<<endl;
    Student s2;
    s2.name =" aditya";
    s2.rollno =21;
    s2.gpa = 7.8;
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.gpa<<endl;

 }
}

