#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

     int i =1;
     

     while(i<=n){
        int val = i;
       int j = 1;
       while(j<=i){
        cout<<val;
        val =val+1;
        j = j+1;
       } 
       cout<<endl;
       i = i+1;
     }
     return 0;
}