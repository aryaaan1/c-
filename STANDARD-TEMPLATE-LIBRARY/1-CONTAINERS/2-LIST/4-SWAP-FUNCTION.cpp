#include <iostream>
#include <list>
using namespace std;
int main(){ 

list<int>mylist;
mylist.push_back(45);
mylist.push_back(40);
mylist.push_back(44);
mylist.push_back(44);



list<int>mylist1;
mylist1.push_back(477);
mylist1.push_back(499);
mylist1.push_back(440);
mylist1.push_back(447);

mylist.swap(mylist1);

list<int> :: iterator it = mylist.begin();
while(it != mylist.end()){
    cout<<*it<<" ";
    it++;
}
cout<<endl;

}