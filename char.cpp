#include <iostream>
#include <cstring> //for c style string functions
#include <cctype>  // for charcter based function
using namespace std;

int main()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    cout << "enter your first name ";
    cin >> first_name;

    cout << "enter your last name";
    cin >> last_name;

    cout << "hello," << first_name << "your first name has " << strlen(first_name) << "charcters" << endl;
    cout << "hello," << last_name << "your last name has " << strlen(last_name) << "charcters" << endl;

    strcpy(full_name , first_name);
    strcat(full_name,"");
    strcat(full_name, last_name);
    cout<<"your full name is " << full_name << endl;

    for(size_t i{0}; i< strlen(full_name); ++i){
        if(isalpha(full_name[i]))
     full_name[i] = toupper(full_name[i]);    }
    
    cout<<"your full name is " << full_name <<endl;
    return 0;
}