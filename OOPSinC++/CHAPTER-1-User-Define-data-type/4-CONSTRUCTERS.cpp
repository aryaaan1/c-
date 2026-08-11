#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    float gpa;
    // constructor 

Student(string s, int r,float g){
    name = s;
    rollno = r;
    gpa = g;
}
};


 int main(){
Student s1("aryan",21,8.5);{
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.gpa<<endl;
    Student s2("aditya",22,9.5);{
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.gpa<<endl;


   


 }
}
}
