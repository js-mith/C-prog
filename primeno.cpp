#include<iostream>
using namespace std;

int main() {
     int n;
     cin>>n;
     int d =2;
     bool divided = false;
     while(d<n){
        if(n%d == 0){
            divided = true;
            break;
        }
        d++;
     }
     if(divided){
        cout<<"not prime"<<endl;
     }else{
        cout<<"prime"<<endl; 
     }
     return 0;
}