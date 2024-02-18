#include <iostream>

using namespace std;

bool func1(int arr1[], int size)
{
    for (int i = 0; i < (size - 2); i++)
    {
        if (arr1[i] == 1 && arr1[i + 1] == 2 && arr1[i + 2] == 3)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr1[] = {1, 1, 2, 1, 2, 3}, size = 0;
    size = (sizeof(arr1) / sizeof(arr1[0]));
    cout << func1(arr1, size) << endl;
    return 0;
}