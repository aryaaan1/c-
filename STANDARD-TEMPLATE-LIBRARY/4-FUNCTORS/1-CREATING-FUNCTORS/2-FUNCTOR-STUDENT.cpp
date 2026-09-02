#include<iostream>
using namespace std;
class student { 
    public:
    string name;
    int marks;
student(){

}
student(string name, int marks )  {
    this->name = name ;
    this->marks = marks ;
}  

};

class studentComparater{
    public:
    bool operator()(student s1, student s2){
        return s1.marks > s2.marks;
    }
};


int main(){
    student s1 ( "aryan",89);
    student s2 ("aditya",90);

    studentComparater c1;
        if(c1(s1,s2) == true )  {
    cout<<"aryan got more marks ";
  }
  else{
    cout<<"adity got more marks ";
  }




}