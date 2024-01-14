#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 20, maximum;
    maximum = (a > b) ? a : b; // this is a ternary operator which is equivalent to the following if - else code
    // if (a > b)
    // {
    //     maximum = a;
    // }
    // else
    // {
    //     maximum = b;
    // }
    cout << "Maximum of " << a << " and " << b << " is " << maximum << endl;
    return 0;
}