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

cout<<a.size()<<endl;
a.pop_back();
// 34 35 36 37
cout<<a.size()<<endl;
cout<<a.front()<<endl;
cout<<a.back()<<endl;
cout<<*(a.begin())<<endl;
// it is printing the number eventhough i have used pop_back 
cout<<*(a.end())<<endl;

if(a.empty()== true){
    cout<<" it is empty ";
}
else{
    cout<<" it is not empty";
}
cout<<endl;
cout<<a.at(0)<<endl;
}





