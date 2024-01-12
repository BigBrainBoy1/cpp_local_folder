#include <iostream>

using namespace std;

int main()
{
    bool a = 0, b = 1;
    bool c = true, d = false;

    cout << a << endl;
    cout << b << endl;

    cout << c << endl;
    cout << d << endl; // this will always print in 0 1 format

    cout << a << endl;
    cout << b << endl;
    cout << boolalpha; // this will print in true fasle format from now on
    // cout << noboolalpha; // this will print in 0 1 format from now on
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}