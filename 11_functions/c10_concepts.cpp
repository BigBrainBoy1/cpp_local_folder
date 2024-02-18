#include <iostream>
#include <concepts>

using namespace std;

template <typename T>
requires integral<T>
T add(T a, T b)
{
    return a + b;
} // concepts are like function templates but unlike templates which will run for every data type we can use concepts to specify a certain data type and then that function will run only for that data type

int main()
{
    cout << add(1, 2) << endl;
    return 0;
}