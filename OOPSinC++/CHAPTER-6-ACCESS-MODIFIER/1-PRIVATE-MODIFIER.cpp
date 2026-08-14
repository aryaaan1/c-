#include <iostream>
using namespace std;
class student {
    public :
    string name ;
    int rollno ;
 student(string name, int rollno , int id ){
    this->name = name;
    this->rollno = rollno;
    this->id = id;


 }
//  void display(){
//     cout<<name<<" "<<rollno<<" "<<id<<endl;
//  } IN VOID WE CAN USE cout<<s1.display()



// GETTER FUNTIONS
int getid(){
    return id ;
}


// SETTER FUNCTIONS
int changeid(int x){
    return id = x;
}
// USING INT OR FLOAT WE CAN USE cout<<s1.dipaly or getmarks
private :
int id ;
 
};

int main(){
    student s1("aryan",12,768);
    // s1.display();

cout<<s1.getid()<<endl;
cout<<s1.changeid(34)<<endl;

   
}
 // id is private but i can access it via this method
    // cuz it's going in constructore which is inside class
    // private modifie works in main function
    
//    cout<<s1.id; this will show error as in private
    