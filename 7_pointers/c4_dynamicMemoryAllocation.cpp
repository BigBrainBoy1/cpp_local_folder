#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *ptr1 = nullptr; // good practice to initialize pointers with a null pointer so that it won't be pointing to anything when we use it
    ptr1 = new int;      // this will dynamically allocate enough memory to store variables of data type int for ptr1 and this memory belongs to our program now and the system can't use it for anything else until we return it
    ptr1 = &a;
    delete ptr1;    // this will free the memory allocated to ptr1 and will be returned back to the os
    ptr1 = nullptr; // again a good practice to set the pointer to nullptr after deleting it
    /*
    some NON - VALID commands below
    int* ptr2 = nullptr;
    *ptr2 = 20; // BAD
    delete ptr2;
    delete ptr2; // BAD to delete twice
    */
    int *ptr2 = nullptr;
    ptr2 = new int(10); // this statement is equivalent to the two statements given below
    int a = 10;
    ptr2 = &a;
    return 0;
}