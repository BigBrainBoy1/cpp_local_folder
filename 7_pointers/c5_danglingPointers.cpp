#include <iostream>

using namespace std;

int main()
{
    // there are 3 types of dangling pointers
    int a = 10;
    // int* ptr1; // 1 uninitialized pointer - BAD
    int* ptr1 = nullptr; // initializing pointer with nullptr - good
    int* ptr2 = nullptr;
    ptr2 = &a;
    // delete ptr2; // here we deleted the pointer but didn't set it to nullptr - BAD
    delete ptr2;
    ptr2 = nullptr; // deleting pointer and setting it to nullptr - good
    // multiple pointers pointing to the same memory
    return 0;
}