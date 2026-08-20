#include <iostream>
#include <stack>
using namespace std;
int main(){
stack<int>a;
a.push(55);
a.push(50);
a.push(45);
a.push(40);
cout<<a.size()<<endl;
a.pop();
cout<<a.size()<<endl;
cout<<a.top()<<endl;
if(a.empty()== true){
    cout<<" stack is empty ";
}
else{
    cout<<" stack is loaded";
}
cout<<endl;
}
