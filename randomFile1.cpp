#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    cout << "Starting countdown 1" << endl;
    for (int i = 5; i > 0; i--)
    {
        cout << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    cout << "Starting countdown 2" << endl;
    for (int i = 5; i > 0; i--)
    {
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    return 0;
}