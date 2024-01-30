#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &referenceTo_a = a;
    cout << "a : " << a << endl;
    cout << "&a : " << &a << endl;
    cout << "referenceTo_a : " << referenceTo_a << endl;
    cout << "&referenceTo_a : " << &referenceTo_a << endl;
    referenceTo_a = 20;
    cout << endl << "Changing referenceTo_a to 20" << endl;
    cout << endl << "a : " << a << endl;
    cout << "&a : " << &a << endl;
    cout << "referenceTo_a : " << referenceTo_a << endl;
    cout << "&referenceTo_a : " << &referenceTo_a << endl;
    return 0;
}