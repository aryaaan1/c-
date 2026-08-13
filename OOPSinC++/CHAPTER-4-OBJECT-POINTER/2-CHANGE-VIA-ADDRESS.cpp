#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float avg;

cricketer( string name , int runs , float avg) {
    this->name = name;
    this->runs = runs;
    this->avg = avg;

}   
void printcricketer(){
    cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
}
};
// pass by reference 
void change(cricketer* c){
    // (*c).name = " aryan";
    c->name = "aryan";

}

int main(){
 cricketer c1("virat kholi",15000,56.7);
    cricketer c2( " dhoni ",12000,59);
    c1.printcricketer();
    // cricketer* p1 = &c1;
    change(&c1);
    cout<<c1.name;

}