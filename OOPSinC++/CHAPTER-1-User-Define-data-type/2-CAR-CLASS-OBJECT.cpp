#include<iostream>
using namespace std;
// students data type is made by me 
class car{
    public:
    string name;
    int price;
    float horsepower;
    string model;
};
int main(){
    car c1;
    c1.name ="honda";
    c1.price =190000;
    c1.horsepower = 60;
    c1.model="sedan";
    cout<<c1.name<<" "; cout<<c1.price<<" ";  cout<<c1.horsepower<<" ";
     cout<<c1.model<<endl;
      car c2;
    c2.name ="suv";
    c2.price =1000000;
    c2.horsepower = 100;
    c2.model="khadan";
    cout<<c2.name<<" "; cout<<c2.price<<" ";  cout<<c2.horsepower<<" ";
     cout<<c2.model<<endl;
}
