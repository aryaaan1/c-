#include <iostream>
#include <list>
using namespace std;
int main(){ 

list<int>mylist;
mylist.push_back(45);
mylist.push_back(40);
mylist.push_back(44);
mylist.push_back(49);
//  45 40 44 49
mylist.push_front(87);
// 87 45 40 44 49
mylist.pop_back();
// 87 45 40 44
mylist.pop_front();
// 45 40 44


cout<<mylist.size()<<endl;
// mylist.clear();
// cout<<mylist.size()<<endl;

// if(mylist.empty() == true){
//     cout<<"list is empty";
// }
// else{
//     cout<<"list is filled";
// }
// cout<<endl;

cout<<*(mylist.begin())<<endl;

// cout<<*(mylist.end()); THIS WILL SHOW SIZE YOU CAN'T GO 
// DIRECTLY ON LAST NO. IN LINK LIST

cout<<mylist.front()<<endl;
cout<<mylist.back()<<endl;




}