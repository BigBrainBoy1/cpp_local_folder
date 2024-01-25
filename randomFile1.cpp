#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int* ptr1 = nullptr;
    // ptr1 = new int;
    *ptr1 = a;
    cout << ptr1 << endl;
    return 0;
}