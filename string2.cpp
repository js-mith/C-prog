#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string s0;
    string s1{"Apple"};
    string s2{"banana"};
    string s3{"kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6{s1, 0, 3};
    string s7(10, 'X');

    cout << s0 << endl;
    cout << s0.length() << endl;

    // comparision.........//
    cout << "\n .........COMPARISION........." << endl;
    cout << boolalpha;
    cout << s1 << "==" << s5 << ":" << (s1 == s5) << endl;
    cout << s1 << "==" << s2 << ":" << (s1 == s2) << endl;
    cout << s1 << "!=" << s2 << ":" << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ":" << (s1 < s2) << endl;
    cout << s1 << " > " << s2 << ":" << (s1 > s2) << endl;
    cout << s4 << " < " << s5 << ":" << (s4 < s5) << endl;
    cout << s1 << "=="
         << "Apple"
         << ":" << (s1 == "Apple") << endl;

    // substring
    cout << "\n substring........." << endl;
    s1 = "this is a test";

    cout << s1.substr(0, 4) << endl;
    cout << s1.substr(5, 2) << endl;
    cout << s1.substr(10, 4) << endl;

    // erase....//

    cout << "\n ....erase....." << endl;
    s1 = "this is a test";
    s1.erase(0, 8);
    cout << " s1 is now : " << s1 << endl;

    // getline....
    cout << "\n ... getline...." << endl;
    string full_name{};
    cout << "enter your full name :";
    getline(cin, full_name);

    cout << "your full nname is :" << full_name << endl;

    // find.....//
    cout << "\n.....find...." << endl;
    s1 = "the secret word is senio";
    string word{};

    cout << "enter the word to find :";
    cin >> word;
    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "found" << word << "at position :" << position << endl;
    else
        cout << "sorry , " << word << "not found" << endl;

    cout << endl;

    return 0;
}