#include<iostream>
#include<queue>
using namespace std;
int main (){
    queue<int>a;
    queue<int>b;
    a.push(34);
    a.push(87);
    a.push(46);
    b.push(341);
    b.push(871);
    b.push(461);

    a.swap(b);
    cout<<a.front()<<" "<<a.back();


}