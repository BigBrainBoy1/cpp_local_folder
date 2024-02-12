#include <iostream>

using namespace std;

union employee
{
    int empId;
    // string empName; // idk why setting it to string data type is throwing an error
    char empName;
}; // difference between structures and union is that in union only one thing can be used at a time

int main()
{
    union employee emp1;
    emp1.empId = 123;
    cout << emp1.empId << endl;
    return 0;
}