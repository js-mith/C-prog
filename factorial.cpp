#include<iostream>
using namespace std;
int main()
{
    int i, fact = 1 , number;
    cout<<"enter the number";
    cin>>number;
    for(i =1 ; i <= number ; i++)
    {
           fact = fact *i;
    }
    cout<<"the factorial "<<fact;
    return 0;
}