#include <iostream>

using namespace std;

int main()
{
    bool a = 0, b = 1; // false, true can also be used

    cout << a << endl;
    cout << b << endl; // this will print in 0 1 format

    cout << boolalpha << a << endl;
    cout << boolalpha << b << endl; // this will print in false true format
    return 0;
}