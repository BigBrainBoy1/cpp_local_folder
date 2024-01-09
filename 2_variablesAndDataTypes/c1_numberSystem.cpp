#include <iostream>

using namespace std;

int main()
{
    int num1 = 15; //Decimal
    int num2 = 017; //Octal (not used in modern times)
    int num3 = 0x0f; //Hexadecimal
    int num4 = 0b00001111; //Binary - C++ 14

    cout << num1 <<endl;
    cout << num2 <<endl;
    cout << num3 <<endl;
    cout << num4 <<endl;
    return 0;
}