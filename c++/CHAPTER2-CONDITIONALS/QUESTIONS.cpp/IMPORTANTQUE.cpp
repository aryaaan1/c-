#include<iostream>
using namespace std;
int main (){
    int x=3,y,z;
    y=x=10;
    z=x<10;
    cout<<x<<endl<<y<<endl<<z;
}
// first statement ka baad second statment input vdeta hai
// equal to jab hota hai tho hierarchy RIGHT TO LEFT chalti hai
// GREATER THANA ND LESS THAN HAS MORE HIERARCHY THAN EQUAL TOO
// LESS THAN AND GREATER THAN ARE CONDITIONS ONLY GIVES TRUE/FALSE
//  FALSE =0 AND TRUE =1 FOR ALL CONDITIOPNS
