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
    cout<<a.size()<<endl;
    a.pop();
    cout<<a.size()<<endl;

    if(a.empty() == true){
        cout<<"queue is empty ";
    }
    else{
        cout<<" queue is not empty ";
    }
    cout<<endl;

    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    a.swap(b);
    

}