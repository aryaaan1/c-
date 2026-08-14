#include <iostream>
using namespace std;
class vehicle {
    // parent class
    public :
    int topspeed  ;
    int milage;
    int fuel;

};

class car : public vehicle {
public:
    string name;
};

class scoty : public vehicle{
public :
   float footspace;
};

class bike : public vehicle{
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