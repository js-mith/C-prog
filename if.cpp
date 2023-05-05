#include<iostream>
using namespace std;

int main() {
     int num{};
     const int min{10};
     const int max{100};
     cout<<"enter the number b/w" << min <<"and" << max;
     cin>>num;
     if(num >= min)
     {
         cout<<num<< "is grater than " << min << endl;
     }

     if(num>= min && num <= max)
     {
         cout<<"\n==========if statement 3========"<<endl;
         cout<< num << "is in range" <<endl;
     }
     return 0;
}
