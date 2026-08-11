#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int price;
    float horsepower;
    string model;
};
void print(car x){
    cout<<x.name<<" ";cout<<x.price<<" ";cout<<x.horsepower<<" ";
    cout<<x.model<<endl;

    

}
int main(){
     car c1;
    c1.name ="honda";
    c1.price =190000;
    c1.horsepower = 60;
    c1.model="sedan";
      car c2;
    c2.name ="suv";
    c2.price =1000000;
    c2.horsepower = 100;
    c2.model="khadan";

    print(c1);
    print(c2);
}