#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int sizeOfArr1 = (sizeof(arr1) / sizeof(arr1[0])); // this is oneway to find the length of anarray
    cout << sizeOfArr1 << endl;
    for (int i = 0; i < sizeOfArr1; i++)
    {
        cout << arr1[i] << endl;
    }
    return 0;
}