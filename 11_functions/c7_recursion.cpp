#include <iostream>

using namespace std;

int fact(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}

int fibonacci(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else if ((num - 1) == 1 || (num - 2) == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(num - 1) + fibonacci(num - 2));
    }
}

int main()
{
    int num1 = 0, num2 = 0;
    cout << "Enter a number : ";
    cin >> num1;
    cout << num1 << "! = " << fact(num1) << endl;
    cout << "Enter a number : ";
    cin >> num2;
    for (int i = 0; i < num2; i++)
    {
        cout << fibonacci(i + 1) << endl;
    }
    return 0;
}