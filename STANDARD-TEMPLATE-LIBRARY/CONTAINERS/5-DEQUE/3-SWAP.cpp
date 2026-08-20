#include<iostream>
#include<queue>
using namespace std;
int main (){
deque<int>a,b;
deque<int> :: iterator it = a.begin();
a.push_front(45);
// why push_front is not working
a.push_back(34);
a.push_back(35);
a.push_back(36);
a.push_back(37);
a.push_back(38);
b.push_back(4);
b.push_back(5);
b.push_back(6);
b.push_back(7);
b.push_back(8);

a.swap(b);
it = a.begin();
while(it!= a.end()){
    cout<<*it<<" ";
    it++;
}




}