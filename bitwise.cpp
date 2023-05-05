#include<iostream>
using namespace std;

int main() {
     int rand = 12 & 13;
     int ror = 12 | 13;
     int rnot = ~12;
     int rxr = 12 ^ 13;
     int rls = 922<< 1;
     int rrs = 1000>>1;

     cout<<rand<<endl;
     cout<<ror<<endl;
     cout<<rnot<<endl;
     cout<<rxr<<endl;
     cout<<rls<<endl;
     cout<<rrs<<endl;


     return 0;
}