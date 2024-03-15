#include <iostream>
// #include <time.h>

using namespace std;

int randFunction()
{
    int randNum = rand() % 25;
    return randNum;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << randFunction() << endl;
    }
    return 0;
}