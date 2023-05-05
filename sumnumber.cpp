#include<iostream>
using namespace std;

int main() {
     int number , sumodd = 0 ,  sumeven = 0;
     int digits;
     cin>>number;
     cout<<"entre number"<<endl;
     while(number!=0){
        digits = number%10;
        if(digits%2 == 0){
            sumeven+= digits;
        }
        else{
            sumodd+= digits;
        }
        number = number/10;
     }
     cout<<sumeven<<endl;
     cout<<sumodd<<endl;
     return 0;
}