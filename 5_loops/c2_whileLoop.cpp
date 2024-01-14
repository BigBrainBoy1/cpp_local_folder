#include <iostream>

using namespace std;

int main()
{
    int i = 0, num;
    cout <<"Enter number : ";
    cin >> num;
    while (i < 10)
    {
        cout << num << " x " << (i + 1) << " = " << (num * (i + 1)) << endl;
        i++;
    }
    return 0;
}