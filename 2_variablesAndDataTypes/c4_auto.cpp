#include <iostream>

using namespace std;

int main()
{
    auto a = 10; // a will be int here
    a = 5.5; // runtime error since a is int so it can't store float
    cout << a << endl;
    return 0;
}