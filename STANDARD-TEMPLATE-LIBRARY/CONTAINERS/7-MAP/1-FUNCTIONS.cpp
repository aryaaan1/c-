#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
 int main(){
    unordered_map<string,string>table;

// INSERTATION

// METHOD 1
table["in"]="india";

// METHOD 2
table.insert(make_pair("en","england"));

// METHOD 3
pair<string,string>pair;
pair.first = "br";
pair.second = "brazil";
table.insert(pair);

cout<<table.size()<<endl;

// table.clear();

if(table.empty()==true){
    cout<<"the table is empty";
}
else{
    cout<<" the table is not empty";
}

cout<<table.at(0);









 }