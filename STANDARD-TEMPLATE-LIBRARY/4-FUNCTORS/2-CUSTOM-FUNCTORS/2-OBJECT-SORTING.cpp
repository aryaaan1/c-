#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class student{
    public:
    string name;
    int marks;

    student(){

    }
    student(string name,int marks){
        this->marks= marks;
        this->name = name;

    }
};
class compartor {
    public:
    bool operator()(student s1, student s2){
        return s1.marks>s2.marks;
    }
};
int main(){
    vector<student>arr = {student("aryan",89),student("aditya",90),
        student("anay",98)};

    sort(arr.begin(),arr.end(),compartor());

    for(student i: arr){
        cout<<i.name<<" "<<i.marks<<endl;
       
    }
   





}

