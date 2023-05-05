#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i <n)
    {
        int space = 0;
        while (space < i)
        {
            cout << ' ';
            space++;
        }
        int star = 0;
        while (star < 2 * (n - i) - 1)
        {
            cout << '*';
            star++;
        }
        i++;
        cout << endl;
        
    }
    return 0;
}