#include <iostream>

using namespace std;

int main()
{
    cout << endl;
    int a = 5;

    cout << "Original Value : " << a << endl;

    cout << "\nPostfix increment : " << a++ << endl; // same as a = a + 1 This will first print the value and then increase it by one but next time this value is printed it will be increased by one
    // a = 5;
    // a = a + 1;
    // cout << a << endl; // now this will print 6 as we have increased the value beforehand
    a = 5;
    cout << "Postfix decrement : " << a-- << endl; // This will first print the value and then decrease it by one but next time this value is printed it will be decrease by one
    a = 5;
    cout << "\nPrefix increment: " << ++a << endl; // This will increase the value by one and then print it
    a = 5;
    cout << "Prefix decrement: " << --a << endl; // This will decrease the value by one and then print it
    cout << endl;
    return 0;
}