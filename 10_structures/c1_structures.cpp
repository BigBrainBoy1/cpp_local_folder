#include <iostream>

using namespace std;

// struct employee
// {
//     int empId;
//     string EmpName;
// };

typedef struct employee
{
    int empId;
    string EmpName;
}emp; // now we can create a data type with only typing emp


int main()
{
    // struct employee emp1;
    emp emp1;
    emp1.empId = 123;
    emp1.EmpName = "qwe";
    cout << emp1.empId << endl;
    cout << emp1.EmpName << endl;
    return 0;
}