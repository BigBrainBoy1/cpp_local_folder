#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0, num;
    cout << "Enter number : ";
    cin >> num;
    do
    {
        cout << num << " x " << (i + 1) << " = " << (num * (i + 1)) << endl;
        i++;
    } while (i < 10); // do-while loop will always run once even when the condition is false
    do
    {
        cout << "gg";
    } while (j > 5); // this loop will run once even when the condition j > 5 is false
    return 0;
}