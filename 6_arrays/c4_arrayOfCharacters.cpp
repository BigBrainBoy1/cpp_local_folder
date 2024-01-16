#include <iostream>

using namespace std;

int main()
{
    char arr1[4] = {'p', 'q', 'r', '\0'}; // '\0' is to indicate the this array has hit the end and it is necessary in array of characters otherwise it might print some garbage value after the array if we print it directly
    char arr2[5] = {'x', 'y', 'z'};       // if we decalare a character array with more size than elements then we don't need '\0' at the end
    char arr3[] = {'a', 'b', 'c', '\0'};  // this also needs '\0' at the end even though we haven't decalred the size
    char arr4[] = {"qwerty"}; // this does not need '\0' at the end
    // for (auto i : arr1)
    // {
    //     cout << i << endl;
    // }
    cout << arr1 << endl; // a character array can also be printed withut a loop like this
    cout << arr2 << endl;
    cout << arr3 << endl;
    cout << arr4 << endl;
    return 0;
}