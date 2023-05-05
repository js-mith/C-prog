#include<iostream>
using namespace std;

int main() {
     int f;
     cout<<"enter fah value"<<endl;
     cin>>f;
     float
      c = (5.0/9) * (f-32);
     cout<< c << endl;

     int a;
     int b;
      cout<<"enter thed number  a and b"<< endl;
      cin>>a>>b;
        bool isequal = (a==b);
        bool isAless = (a < b );
        cout<< " are they equal"<< isequal << endl;
        cout<<" are they less" << isAless << endl;

        bool third = isequal && isAless;
     return 0;
}