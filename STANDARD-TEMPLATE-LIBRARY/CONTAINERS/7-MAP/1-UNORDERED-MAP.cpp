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
pair<string,string>my_pair;
my_pair.first = "br";
my_pair.second = "brazil";
table.insert(my_pair);

cout<<table.size()<<endl;

// table.clear();

if(table.empty()==true){
    cout<<"the table is empty";
}
else{
    cout<<"the table is not empty";
}
cout<<endl;
cout<<table.at("en")<<endl;

unordered_map<string,string>::iterator it = table.begin();

while(it != table.end()){
    pair<string ,string> ai = *it;
    cout<<ai.first<<" "<<ai.second<<endl;
    it++;
}

// table.erase(table.begin(),table.end());
// cout<<table.size();

if(table.find("in") != table.end()){
    cout<<"found the key ";
}
else{
    cout<<"key not found ";
}
cout<<endl;
cout<<table.count("en");











 }