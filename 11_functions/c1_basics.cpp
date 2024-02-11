#include <iostream>

using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int num1 = 0, num2 = 0;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << "Sum of " << num1 << " and " << num2 << " = " << add(num1, num2);
    return 0;
}