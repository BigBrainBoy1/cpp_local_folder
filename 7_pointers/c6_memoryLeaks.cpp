#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int *ptr1 = nullptr;
    ptr1 = new int(a); // here a piece of memory is allocated to ptr1 and it is the only key through we can acess it
    ptr1 = &b;          // now ptr1 points to the adress of a and we can't get acess to the previous adress to delete it and release it back to the system so the os will think that memory is still used in our program
    delete ptr1;        // even deleting this wont help
    ptr1 = nullptr;
    // one example of memory leak
    {
        int *ptr2 = new int(a);
    }
    // another example of memory leak if we didn't delete the pointer as we have no way to acess the memory when the scope ends
    return 0;
}