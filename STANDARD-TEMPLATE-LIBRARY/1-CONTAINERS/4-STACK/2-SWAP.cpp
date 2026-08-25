#include <iostream>
#include <stack>
using namespace std;
int main(){
stack<int>a;
stack<int>b;
a.push(55);
a.push(50);
a.push(45);
a.push(40);
b.push(51);
b.push(52);
b.push(41);
b.push(42);
a.swap(b);
cout<<a.top();


}