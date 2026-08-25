#include <iostream>
#include <list>
using namespace std;
int main(){ 

list<int>mylist;
mylist.push_back(45);
mylist.push_back(40);
mylist.push_back(44);
mylist.push_back(44);


// before removing 
list<int> :: iterator it = mylist.begin(); 

while(it != mylist.end()){
    cout<<*it<<" ";
    it++;
}

cout<<endl;

mylist.remove(44);
// after removing
list<int> :: iterator it1 = mylist.begin(); 

while(it1 != mylist.end()){
    cout<<*it1<<" ";
    it1++;
}

cout<<endl;

}