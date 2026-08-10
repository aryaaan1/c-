#include<iostream>
using namespace std;
int main(){
    int count =0;
    // string vowel ={'a','e','i','o','u'};
    string s =" aryangindu ";
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'|| s[i]=='o'||s[i]=='u'){
            count +=1;
        }


    }

    cout<<count;
}