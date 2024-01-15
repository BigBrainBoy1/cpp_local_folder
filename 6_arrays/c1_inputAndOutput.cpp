#include <iostream>

using namespace std;

int main()
{
    int sizeOfArr1;
    cout << "Enter the size of array : ";
    cin >> sizeOfArr1;
    int arr1[sizeOfArr1];
    for (int i = 0; i < sizeOfArr1; i++)
    {
        cout << "Enter entry " << (i + 1) << " : ";
        cin >> arr1[i];
    }
    for (int i = 0; i < sizeOfArr1; i++)
    {
        cout << "Entry " << (i + 1) << " is " << arr1[i] << endl;
    }
    // other ways to declare array
    // int arr2[] = {1, 2, 3, 4}; // this will be an array of length 4
    // int arr3[5] = {10, 20, 30}; // since this array is of length 5 and there are only 3 elements present so the rest will be automatically set to 0 in this type of declaration
    return 0;
}