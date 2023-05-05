#include<iostream>
using namespace std;

int main() {
     char selection{};
     do{
        cout<<"\n------------------"<<endl;
        cout<<"1. do this"<<endl;
        cout<<"2. do that"<<endl;
        cout<<"Q. quit"<<endl;
        cout<<"\n enter your selection :";
       cin>>selection;
      if (selection == '1')
      cout<<"you code 1 - doing this"<<endl;
      else if(selection == '2' )
      cout<<"you chose 2 - doing that"<<endl;
      else if(selection == 'Q' || selection == 'q')
      cout<<"goodbye...."<<endl;
      else
      cout<<"unknown option - try again..."<<endl;

     }while(selection != 'q' && selection != 'Q');

     cout<<endl;

     return 0;
}