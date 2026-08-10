#include<iostream>
using namespace std;
void swap( int x, int y){
    int temp = x;
    x =y;
    y= temp;}
    
int main(){
    int x = 12;
    int y =45;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;}

//  ya pa scope of variable se smajho dono x and y dibba alag
//  alag bracket ma isliye x and y interchange nahi ho arahya\
