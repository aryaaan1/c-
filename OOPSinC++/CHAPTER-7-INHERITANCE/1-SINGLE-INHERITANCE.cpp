#include <iostream>
using namespace std;
class scoty {
    // parent class
    public :
    int topspeed  ;
    int milage;
//  boot pace will be inaccessible to bike 
    private :
    float bootspace;
};

// child class ( : is called extended)
class bike : public scoty{
    int gears;

};

int main(){
    bike b1;
    b1.topspeed = 65;
    cout<<b1.topspeed;
}