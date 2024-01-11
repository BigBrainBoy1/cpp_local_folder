#include <iostream>

using namespace std;

int main()
{
    bool a = 0, b = 1; // false, true can also be used

    cout << a << endl;
    cout << b << endl; // this will print in 0 1 format

    cout << a << endl;
    cout << b << endl;

    cout << boolalpha; // this will print in true fasle format from now on
    cout << a << endl;
    cout << b << endl;
    return 0;
}