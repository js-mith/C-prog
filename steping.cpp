/**** WAP TO FOLLOW STEP
 * 1. P/p- PRINT NUMBER
 * 2. A/a- ADD NUMBER
 * 3. M/m- MEAN OF THE NUMBER
 * 4. S/s- SMALLEST NUMBER
 * 5. L/l- LARGEST NUMBER
 * 6. Q/q-QUIT ******/

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> numbers{};
    char selection{};

    do
    {
        cout << "\n P- Print number" << endl;
        cout << "\n A- Add a number" << endl;
        cout << "\n M- Mean of number" << endl;
        cout << "\n S- Smallest number" << endl;
        cout << "\n L- Largest number" << endl;
        cout << "\n Q- Quit" << endl;

        cout << "\n enter your choice :" << endl;
        cin >> selection;
        if (selection == 'P' || selection == 'p')
        {
            if (numbers.size() == 0)
            {
                cout << "[] - the list is empty" << endl;
            }

            else
            {
                cout << " [ ";
                for (auto num : numbers)

                    cout <<  num  << " ";
                cout << " ] " << endl;
            }
        }
        else if (selection == 'A' || selection == 'a')
        {
            int num_to_add{};
            cout << "enter an integer to add  :";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout <<  num_to_add  <<  "added"  << endl;
        }
        else if (selection == 'M' || selection == 'm')
        {
            if (numbers.size() == 0)
            {
                cout << "unable to calculate mean" << endl;
            }
            else
            {
                int total{};
                for (auto num : numbers)
                    total += num;
                cout << " The Mean is :" << static_cast<double>(total) / numbers.size() << endl;
            }
        }
        else if (selection == 'S' || selection == 's')
        {
            if (numbers.size() == 0)
            {
                cout << "unable to determine" << endl;
            }
            else
            {
                int smallest = numbers.at(0);
                for (auto num : numbers)
                    if (num < smallest)
                        smallest = num;
                cout << " the smallest number is :" << smallest << endl;
            }
        }
        else if (selection == 'L' || selection == 'l')
        {
            if (numbers.size() == 0)
            {
                cout << "unable to determine" << endl;
            }
            else
            {
                int largest = numbers.at(0);
                for (auto num : numbers)
                    if (num > largest)
                        largest = num;
                cout << " the largest number is :" << largest << endl;
            }
        }
        else if (selection == 'Q' || selection == 'q')
        {
            cout << "GOOD BYE" << endl;
        }
        else
        {
            cout << "unknown value" << endl;
        }

    } while (selection != 'Q' && selection != 'q');

    return 0;
}