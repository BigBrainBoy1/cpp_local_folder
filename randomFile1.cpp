#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *ptr1 = new int(a);
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    delete ptr1;
    ptr1 = nullptr;
    return 0;
}