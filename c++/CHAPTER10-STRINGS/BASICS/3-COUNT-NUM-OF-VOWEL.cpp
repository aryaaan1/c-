#include<iostream>
using namespace std;
int main(){
    int count =0;
    // string vowel ={'a','e','i','o','u'};
    string s =" aryangandu ";
    for(int i=0;i<10;i++){
        if(s[i]=='a'){
            count +=1;
        }
        if(s[i]=='e'){
            count +=1;
        }
        if(s[i]=='i'){
            count +=1;
        }
        if(s[i]=='o'){
            count +=1;
        }
        if(s[i]=='u'){
            count +=1;
        }
        else
        continue;
    }
    cout<<count;
    
   
}