#include<iostream>
using namespace std;

int main() {
     int i ;
     int j;
     cout<<"enter the number";
     cin>>i>>j;

     for ( int i{1} , j{5} ; i<=5 ; ++i , ++j)
     {
        cout<< i << "*" << j << ":" << (i * j) << endl;
     }
     
     return 0;
}