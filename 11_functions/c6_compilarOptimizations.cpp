#include <iostream>
#include <string>

using namespace std;

// int addNum(int a, int b)
// {
//     int sum = a + b;
//     cout << "In function &sum : " << &sum << endl;
//     return sum;
// }

string addStr(string a, string b)
{
    string sum = a + b;
    cout << "In function &sum : " << &sum << endl;
    return sum;
}

int main()
{
    // int num1 = 3, num2 = 5, sum = 0;
    // sum = addNum(num1, num2);
    // cout << "In main &sum : " << &sum << endl;
    // cout << addNum << endl;
    string str1 = "qwe", str2 = "-asd", sum;
    sum = addStr(str1, str2);
    cout << "In main &sum : " << &sum << endl;
    cout << sum << endl;
    // the compiler may optimize this code and it can pass by reference instead of pass by value implicitily in case of strings as strings use more memory and copying string may cause more memory usage
    return 0;
}