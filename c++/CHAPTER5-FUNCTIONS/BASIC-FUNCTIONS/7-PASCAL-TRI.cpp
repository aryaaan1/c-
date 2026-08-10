#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++)
    f *=i;
    return f;
}
int ncr(int i, int j){
     return fact(i)/(fact(j)*fact(i-j));
    //  isko main dunction mai vhi use kar sakta hai
    // but waha pa return nahi hoga new variable bana ka usma
    // net value ko daal ka cout karna hoga
}
int main(){
    int n;
    cout<<"enter the number :"; 
    cin>>n;
   
    for(int i=0;i<=n;i++){
          for(int j=0;j<=n-i;j++){
        cout<<" ";
      }

        for(int j=0;j<=i;j++){
            cout<<ncr(i,j);
            cout<<" ";
    }

    // bass upar nicha kar doga tho for loop ma pasacal tri
    // kona sa chipak jayaga

    

    cout<<endl;
   
    }


return 0;

}