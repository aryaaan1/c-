#include <iostream>
using namespace std;
class vehicle {
    // parent class
    public :
    int topspeed  ;
    int milage;
    int fuel;

};
class fourwheller : public vehicle{
public :
   float footspace;
};
class car : public fourwheller {
public:
    string name;
};
class twowheller : public vehicle{
public :
   float footspace;
};
//  multiple inheritance
class bike : public twowheller,fourwheller{
public:
    int gearbreak;
};
class scoty : public twowheller{
public:
    int gearbreak;
};

int main(){
    car c;
    bike b;
    scoty s;

    s.footspace = 10;
    cout<<s.footspace;
}