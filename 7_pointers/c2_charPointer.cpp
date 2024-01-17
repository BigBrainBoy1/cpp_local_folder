#include <iostream>

using namespace std;

int main()
{
    const char *a = {"qwerty"}; // this will store the string "qwerty" as a character array as below this char pointer should always be a const or compiler will throw an error
    // char arr1[] = {"qwerty"};
    cout << a << endl;  // this will print the string same as we print arr1[]
    cout << *a << endl; // *a will point to the adress of the first element of the character array i. e. 'q' so *a will print 'q'
    return 0;
}