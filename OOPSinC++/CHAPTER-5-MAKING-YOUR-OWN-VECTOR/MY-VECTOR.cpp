#include<iostream>
using namespace std;
class vector {
    public: 
    int size ;
    int capacity ;
    int* arr;

vector(){
    size = 0;
    capacity = 1;
    arr = new int[1];
} 
// self made a function like push_back 
void add(int ele){
    if(size==capacity){
        capacity *=2;
        int* arr1= new int[capacity];
        for(int i =0;i<size ; i++){
            arr1[i] = arr[i];
        }
        arr1=arr;
    }
    // when i used else 33 was not showing
        arr[size]=ele;
        size++;
}
// made a print function 
void elementprint(){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
 int get(int index){
    if(index>=size || index<0){
        cout<<" invlid request";
        return -1;
    }
    // returm karna is neccessary
    
         return arr[index];
    }
void remove(){
    if(size ==0){
        cout<<" invalid request";
    }
    size--;
    // yaha pa return ka use nahi hai return sirf ak
    // value retun karta hai phir ruk jata hai
}
   
 

};
int main(){
    vector v1;
    v1.elementprint();
    cout<< v1.size<<" "<<v1.capacity<<endl;
    v1.add(20);
    v1.elementprint();
    cout<<endl;
   cout<< v1.size<<" "<<v1.capacity<<endl;
    v1.add(33);
    v1.elementprint();
    cout<<endl;
   cout<< v1.size<<" "<<v1.capacity<<endl;
   v1.add(69);
    v1.elementprint();
    cout<<endl;
   cout<< v1.size<<" "<<v1.capacity<<endl;
   cout<<v1.get(1)<<endl;
   v1.remove();
   v1.elementprint();
   cout<<endl;
}

 

