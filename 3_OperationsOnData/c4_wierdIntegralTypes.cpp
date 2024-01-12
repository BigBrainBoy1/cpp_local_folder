#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    // airthmetic operations can't be performed on data types which has size less than 4 types
    short int a = 10, b = 20; // short int is of size 2
    auto c = a + b; // as both a and b are of less than 2 bytes they will be converted and c will be an int and not a short int
    cout << sizeof(a)<< endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    return 0;
}