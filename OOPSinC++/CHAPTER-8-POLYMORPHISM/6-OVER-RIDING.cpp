#include <iostream>
using namespace std;
class scoty{
    public :
    string wheels;
    int milage; 
    // over riding 
    virtual void sound(){
        cout<<" vroom vroom";
    }
};
class bike : public scoty{
    public:
    int gears;
     void sound(){
        cout<<" dhroom dhroom";
    }

};

class superbike : public bike{
    public:
    int cc;
    void sound(){
        cout<<" groom groom ";
    }
    

};
int main(){
    scoty* s1 = new scoty();
   s1->sound();
   cout<<endl;

   bike* b1 = new bike();
   b1->sound();
   cout<<endl;

   scoty* s2 = new bike();
   s2->sound();
   cout<<endl;

   bike* b2 = new superbike();
   b2->sound();

  
}