#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main (){
    ofstream fout;
    fout.open("zerohero.txt");
    vector<int>arr;
    arr ={1,2,3,4,5};
    for(int i =0 ; i<5;i++){
        fout<<arr[i]<<" ";
    };
   fout.close();
   ifstream fin;
   fin.open("zerohero.txt");
   char c;
   c = fin.get();
   while(!fin.eof()){
    fin>>c;
    c = fin.get();
    fin.close();
   }
   
  

}