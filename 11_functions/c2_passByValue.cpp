#include <iostream>

using namespace std;

void func1(int a)
{
    ++a;
    cout << "Inside function " << a << ", &a : " << &a << endl;
}

int main()
{
    int a = 10;
    cout << "a (before function call) : " << a << ", &a : " << &a << endl;
    func1(a);
    cout << "a (after function call) : " << a << ", &a : " << &a << endl;
    return 0;
}