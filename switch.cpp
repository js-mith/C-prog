#include <iostream>
using namespace std;

int main()
{
     char letter_grade;
     cout << "enter the garde to need percentage :";
     cin >> letter_grade;

     switch (letter_grade)
     {
     case 'a':
     case 'A':
          cout << "you need a 90 or above , study hard";
          break;

     case 'b':
     case 'B':
          cout << "you need a 80-89 , good study";
          break;

     case 'c':
     case 'C':
          cout << "you need a 70-79 , go study";
          break;

     case 'd':
     case 'D':
          cout << "you need only 60-69 ";
          break;

     case 'f':
     case 'F':
     {
          char confirm{};
          cout << "are you sure(Y/N)?";
          cin >> confirm;

          if (confirm == 'y' || confirm == 'Y')
          {
               cout << "okk , i think you didn't study";
          }
          else if (confirm == 'n' || confirm == 'N')
          {
               cout << "hmm , go study";
          }
          else
               cout << "undefined char";
     }

     default:
          break;
     }

     return 0;
}