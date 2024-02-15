#include <iostream>

using namespace std;

int fibonacci(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else if((num - 1) == 1 || (num - 2) == 1){
        return 1;
    }
    else
    {
        return (fibonacci(num - 1) + fibonacci(num - 2));
    }
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << fibonacci(i+1) << endl;
    }
    return 0;
}