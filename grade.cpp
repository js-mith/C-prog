#include<iostream>
using namespace std;

int main() {
     int score{};
     cout<<"enter the score on the exam(0-100) :";
     
     
     cin>>score;
      
      char letter_grade;

      if(score>=0 && score <=100)
      {
          if(score>90)
          letter_grade = 'A';
          else if(score>80)
          letter_grade = 'B';
          else if(score>70)
          letter_grade = 'C';
          else if(score>60)
          letter_grade = 'D';
          else
          letter_grade = 'E';

          cout<<"your grade is :" << letter_grade << endl;


      }
      else{
          cout <<   "sorry"   << score <<   "is not in range"  <<endl;
      }



     
    

     return 0;
}