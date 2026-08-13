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
};
int main(){
 cricketer c1("virat kholi",15000,56.7);
    cricketer* c2= new cricketer( " dhoni ",12000,59);
    int* p = new int(24);
    cout<<*p<<endl;
    // cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;
     cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;
}