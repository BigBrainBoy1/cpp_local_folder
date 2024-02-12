#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {3425, 325, 345, 535, 53, 79, 23};
    for (int i = 0; i < sizeof(arr1); i++)
    {
        // cout << "arr1[" << i << "] = " << arr1[i] << endl;
        cout << i << endl;
    }
    return 0;
}