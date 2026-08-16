#include <iostream>
using namespace std;
class fraction{ 
public: 
int num;
int den;

fraction(int num , int den){
    this->num = num;
    this->den = den;

}

fraction operator+(fraction f){
    int Newnum = this->num * f.den + f.num * this->den;
    int Newden = this->den * f.den;
    
    cout << Newnum <<" / " << Newden<<endl;
}

 void printfraction(){
    cout<<num<<" / "<<den<<endl;
 }
};
int main(){
    fraction f1(1,2);
    fraction f2(1,2);
    f1.printfraction();
    f2.printfraction();
    fraction f3 = f1 + f2;
    
    
    
}