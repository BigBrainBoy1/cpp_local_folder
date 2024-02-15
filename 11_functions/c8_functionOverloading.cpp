#include <iostream>

using namespace std;

int max(int a, int b)
{
    cout << "int overload function ";
    return (a > b) ? a : b;
}

float max(float a, float b)
{
    cout << "float overload function ";
    return (a > b) ? a : b;
}

int main()
{
    int num1 = 1, num2 = 3, m;
    float num3 = 3.3, num4 = 4.4, n;
    cout << max(num1,num2);
    cout << endl;
    cout << max(num3,num4);
    // one type of function overloading
    // types of function overloading -> different (type of parameters, order of parameters, number of parameters)
    return 0;
}