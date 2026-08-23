#include<iostream>
#include<queue>
using namespace std;
int main(){

    priority_queue<int,vector<int>,greater<int>>a,b;
    // it  creates a priority queue of min heap
    a.push(67);
    a.push(76);
    a.push(87);
    // 67 76 87
    cout<<a.size()<<endl;
    a.pop();
    // 76 87
    cout<<a.size()<<endl;
    cout<<a.top()<<endl;
    // 76

    if(a.empty()==true){
        cout<<"the priority queue is empty";
    }
    else{
        cout<<"the priority queue is not empty ";
    }
    cout<<endl;

    b.push(6);
    b.push(7);
    a.swap(b);
    cout<<a.size();
}