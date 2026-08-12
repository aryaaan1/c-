#include<iostream>
#include<string>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float avg;

    cricketer (string name , int runs , float avg){
        this->name = name;
        this->runs = runs; 
        this->avg = avg;

    }
    // when void in inside the class use this 
    // void print(){
    // cout<<name<<" "<<runs<<" "<<avg<<endl;

    // }
    int matches(){
        return runs/avg;
    }
   
};
  void print(cricketer c){
    cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
  }
  
int main (){
    cricketer c1("virat kholi",15000,77.3);
    cricketer c2("rohit sharma",20000,88.9);
    // when inside the class use this 
//    c1. print();
//    c2. print();

print(c1);
print(c2);
cout<<c1.matches()<<endl;
cout<<c2.matches();

}