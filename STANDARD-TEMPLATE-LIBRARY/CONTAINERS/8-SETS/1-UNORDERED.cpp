#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main (){
    unordered_set<int>at;
    at.insert(7);
    at.insert(71);
    at.insert(711);
    at.insert(7111);


    unordered_set<int>::iterator a = at.begin();
    while( a != at.end()){
        cout<<*a<<" ";
        a++ ;
    }
    cout<<endl;
    cout<<at.size()<<endl;

    // at.erase(at.begin(),at.end());
    // cout<<at.size();

    at.clear();
    cout<<at.size();
    cout<<endl;

if(at.find(71) != at.end()){
    cout<<"found the number ";
}
else{
    cout<<"not found ";
}
cout<<endl;

cout<<at.count(71);
cout<<endl;

if(at.count(71)==1){
    cout<<"it is there";
}
else{
    cout<<"it is not there";
}


}
