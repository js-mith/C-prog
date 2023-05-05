#include<iostream>
using namespace std;

int main() {
     int num1{false} ,  num2{false};
    // int equal_result{};
     //int not_equal_result;
     cout<<"enter the two integer the separeted by a space";
     cout<<boolalpha;
     cin>>num1>>num2;
     //equal_result = (num1 == num2);
     //not_equal_result = (num1 != num2);
     //cout<<"comparsion result(equal)"<<equal_result<<endl;
     //cout<<"comparsion result(not equal)"<<not_equal_result<<endl;

     const int lower{10};
     const int upper{20};
     cout<<"\n enter an integer that is greater than"<<lower<< ":";
     cout<<num1<< ">" << lower <<  (num1>lower) <<endl;
     cout<<"\n enter an integer that is less than "<<upper << ":";
     cout<<num2<<"<" << upper << (num2<upper) <<endl;
     return 0;
}