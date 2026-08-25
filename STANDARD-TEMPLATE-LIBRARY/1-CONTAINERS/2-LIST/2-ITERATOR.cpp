#include <iostream>
#include <list>
using namespace std;
int main(){ 

list<int>mylist;
mylist.push_back(45);
mylist.push_back(40);
mylist.push_back(44);
mylist.push_back(49);

list<int> :: iterator it = mylist.begin(); 

while(it != mylist.end()){
    cout<<*it<<" ";
    it++;
}

cout<<endl;

}