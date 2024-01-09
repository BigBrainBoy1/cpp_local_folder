#include <iostream>

using namespace std;

int main()
{
    char c1 = 65, c2 = 'a', c3 = 'qw'; // a character should be enclosed in single quotes '' and not double quotes ""

    cout << c1 << endl; // this will print the caracter with ASCII value 65
    cout << c2 << endl;
    cout << c3 << endl; // this will be a runtime error since char can only store one character
    cout << static_cast<int>(c1) << endl; //this will print the integer value of c1
    return 0;
}