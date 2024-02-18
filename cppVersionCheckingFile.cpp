// this file is to check the version of cpp that is being used by the compiler to use C++20 change code runner settings put -std=c++20 and while setting build configuration also put -std=c++20

#include <iostream>

using namespace std;

int main()
{
    if (__cplusplus == 202002L)
    {
        cout << "C++20\n";
    }
    else if (__cplusplus == 201703L)
    {
        cout << "C++17\n";
    }
    else if (__cplusplus == 201402L)
    {
        cout << "C++14\n";
    }
    else if (__cplusplus == 201103L)
    {
        cout << "C++11\n";
    }
    else if (__cplusplus == 199711L)
    {
        cout << "C++98\n";
    }
    else
    {
        cout << "pre-standard C++\n";
    }
}