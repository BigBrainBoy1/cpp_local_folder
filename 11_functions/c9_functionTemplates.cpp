#include <iostream>

using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}// this is a function template which will make functions accordingly as the data type is change and we won't have to write functions with same logic for different data types

int main()
{
    cout << maximum(1, 2) << endl;
    cout << maximum(1.1, 2.2) << endl;
    cout << maximum("qwe", "asdf") << endl;
    cout << maximum<double>(2,3.3); // this is a way to use function templates with arguments of different data types, we explicitely need to specify the data type which is double in this case
    // otherwise we can't use a function template with arguments of different data types
    return 0;
}