#include<iostream>
using namespace std;

int main() {
     int n;
     cout<<"enter n"<<endl;
     cin>>n;
      int i =1;
      int j= 0;
      while(i<=n){
      
      while(j<=i-1){
        cout<<i<<"";
     
        j = j+1;
           
      }
      j=0;
       i = i+1;
      cout<<endl;
      
      
      }
    
     return 0;
}