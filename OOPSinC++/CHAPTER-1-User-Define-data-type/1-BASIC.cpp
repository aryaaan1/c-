#include<iostream>
using namespace std;
// students data type is made by me 
class student{
    public:
    string name;
    int rollno;
    float cgpa;


};
int main(){
    student a1;
    a1.name="Aryan";
    a1.rollno =21;
    a1.cgpa =8.5;
    cout<<a1.name<<" "<<a1.rollno<<" "<<a1.cgpa<<endl;
    student a2;
    a2.name="Aditya";
    a2.rollno =21;
    a2.cgpa =8.5;
    cout<<a2.name<<" "<<a2.rollno<<" "<<a2.cgpa<<endl;
    
}
