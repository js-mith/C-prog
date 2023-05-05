#include <iostream>
using namespace std;

int main()
{
    enum direction
    {
        left,
        right,
        up,
        down
    };

    direction heading( left);

    switch (heading)
    {
    case left:
        cout << "go left";
        break;

    case right:
        cout << "go right";
        break;

    default:
        break;
    }
    return 0;
}