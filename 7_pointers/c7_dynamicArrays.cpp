#include <iostream>

using namespace std;

int main()
{
    int *ptr1 = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cout << *(ptr1 + i) << endl;
    }
    delete [] ptr1;
    ptr1 = nullptr;
    // dynamic arrays has some limitations in comparison to non-dynamic arrays
    return 0;
}