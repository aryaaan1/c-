#include<iostream>
using namespace std; 
class car{
    public:
    string name;
    int price;
    float cc;
    string model;

car(string s, int p, float c,string m){
    name = s;
    price = p;
    cc = c;
    model = m;
}
};
void printcar(car x){
     cout<<x.name<<" "<<x.price<<" "<<x.cc<<" "<<x.model<<endl;

}
void change(car& x){
    x.name="audi";
    
}
int main(){
    
    car c1("aryan",190000,78.5,"sedan");
    printcar(c1);
    cout<<endl;
    change(c1);
    printcar(c1);
   
}
