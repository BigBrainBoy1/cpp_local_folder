#include <iostream>

using namespace std;

void max(int a, int b, int &output)
{
    if (a > b)
    {
        output = a;
    }
    else
    {
        output = b;
    }
}

int main()
{
    int output = 0;
    max(2,3,output);
    cout << output << endl;
    return 0;
}