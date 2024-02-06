#include <iostream>

using namespace std;

int main()
{
    int num1 = 0, num2 = 0;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    if (num1 != num2)
    {
        cout << (num1 + num2) << endl;
    }
    else if (num1 == num2)
    {
        cout << 3 * (num1 + num2) << endl;
    }
    return 0;
}