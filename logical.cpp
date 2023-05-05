#include<iostream>
using namespace std;

int main() {
     int num{};
     const int lower{10};
     const int upper{20};
     cout<<boolalpha;
     cout<<"enter an integer - the bound are" <<  lower  <<  "and"  <<  upper  <<":";
     cin>>num;
     //bool within_bound{false};
     //within_bound = (num > lower && num < upper);
     //cout<< num << "is between" << lower << "and" << upper << ":" << within_bound; 


     //bool withoutside_bound{false};
     //withoutside_bound = (num < lower || num > upper);
     //cout<< num << "is outside " << lower << "and" << upper << ":" << withoutside_bound; 


     bool withequal_bound{false};
     withequal_bound = (num == lower || num == upper);
     cout<< num << "is equal " << lower << "and" << upper << ":" << withequal_bound; 


     return 0;
}