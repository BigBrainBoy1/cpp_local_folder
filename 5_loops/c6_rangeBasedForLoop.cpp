#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {234, 52, 35, 353, 25, 36};
    for (int i : arr1) // this is a range based for loop here i will automatically iterate through the elements of arr1 and directly print them also i should be of data type auto if we don't the data type of array
    {
        cout << i << endl;
    }
    return 0;
}