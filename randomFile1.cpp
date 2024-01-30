#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int &referenceTo_a = a;
    referenceTo_a = b;
    cout << a << endl;
    return 0;
}