#include <iostream>
using namespace std;
int main (){
     int n;
     cout<<" ENTER THE NUMBER :";
     cin>>n;
     int ch;
     
     
     
     for(int i =1 ; i<=n ; i++){
         if(i%2!=0){ 
            for(int j=1 ;j<=i ; j++){
                cout<<j<<" ";
            }
        }

          else
            for(int j=1 ;j<=i ; j++){
                char ch = (char)j+64;
                    cout<<ch<<" ";
                
              
            }



cout<<endl;
         
        
       
        

        
}
}