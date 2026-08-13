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
int main(){
    cricketer c1("virat kholi",15000,56.7);
    cricketer c2( " dhoni ",12000,59);
    c1.printcricketer();
    //  pointers 
    cricketer* p1 = &c1;
    cout<<p1<<endl;
    cout<<(*p1).name<<endl;
    // (*p1).name = "rohit";
    p1->name = " rohit ";
    cout<<(*p1).name;
}
