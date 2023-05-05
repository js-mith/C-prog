#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << "the factor are" << endl;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "\t" << i;
        }
    }
    cout << endl;
    return 0;
}