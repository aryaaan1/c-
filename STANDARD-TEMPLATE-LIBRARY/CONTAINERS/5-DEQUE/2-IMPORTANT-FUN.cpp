#include<iostream>
#include<queue>
using namespace std;
int main (){
deque<int>a;
deque<int> :: iterator it = a.begin();
a.push_front(45);
// why push_front is not working
a.push_back(34);
a.push_back(35);
a.push_back(36);
a.push_back(37);
a.push_back(38);

while(it!= a.end()){
    cout<<*it<<" ";
    it++;
}
cout<<endl;
// cout<<a.front()<<endl;
it = a.begin();
while(it!= a.end()){
    cout<<*it<<" ";
    it++;
}
cout<<endl;

a.insert(a.begin(),77);
cout<<a.front()<<endl;
it = a.begin();
while(it!= a.end()){
    cout<<*it<<" ";
    it++;
}
cout<<endl;
// a.erase(a.begin(),a.end());
// cout<<a.size()<<endl;
a.clear();
cout<<a.size()<<endl;
}
