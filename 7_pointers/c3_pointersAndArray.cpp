#include <iostream>

using namespace std;

int main()
{
    int arr1[4] = {23, 43, 54, 78};
    int *b = arr1; // if array is pointing to an array then we don't need '&' and it will point to the adress of the element at index 0
    // b++; //this will point to the adress of element present at the next index
    cout << b << endl;
    cout << *b << endl;
    return 0;
}