#include <iostream>
#include <list>
using namespace std;
int main(){ 

list<int>mylist;
mylist.push_back(45);
mylist.push_back(40);
mylist.push_back(44);
mylist.push_back(44);

mylist.insert(mylist.begin(),78);
cout<<mylist.size()<<endl;

mylist.erase(mylist.begin(),mylist.end());
cout<<mylist.size();


}