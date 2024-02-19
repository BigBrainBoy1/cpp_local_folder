#include <iostream>

using namespace std;

bool func1(int arr1[], int size)
{
    int count = 0;
    for (int i = 0; i < (size - 1); i++)
    {
        if (arr1[i] == arr1[i + 1] && arr1[i + 1] == arr1[i + 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr1[] = {1, 1, 1, 2, 2, 2, 1}, size = 0;
    size = ((sizeof(arr1)) / sizeof(arr1[0]));
    cout << func1(arr1, size) << endl;
    // func1(arr1, size);
    return 0;
}