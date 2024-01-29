#include <iostream>

using namespace std;

int main()
{
    // Bisection method
    int n, lowerRange, upperRange;
    while (true)
    {
        cout << "Enter degree of equation : ";
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "Choose a equation of odd degree!!" << endl;
        }
        else
        {
            break;
        }
    }
    // cout << "Enter lower range (hit return to skip): ";
    // cin >> lowerRange;
    // cout << "Enter lower range (hit return to skip): ";
    // cin >> upperRange;
    int coefficients[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        cout << "Enter coefficient of term with degree " << (n - i) << " : ";
        cin >> coefficients[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << "Coefficient of term with degree " << coefficients[i] << endl;
    }
    for (int i = -10; i <= 10; i++)
    {
        for (int j = i; j <= 10; j++)
        {
            // cout << i << ", " << j << endl;
        }
    }
    return 0;
}