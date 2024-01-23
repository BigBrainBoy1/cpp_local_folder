#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *ptr1 = nullptr; // we declare a pointer by using a * before variable name and empty curly braces represnt that this pointer is not pointing to anything yet
    // to store the adress of an int variable we need a pointer of int variable i. e. pointer should be of the same data type as of the data type of the variable of whose adress is to be stored in it
    ptr1 = &a; // now ptr1 will store the adress of a in memory
    cout << ptr1 << endl;
    cout << *ptr1 << endl; // this way we can print the value of the variable whose adress ptr1 is storing
    return 0;
}