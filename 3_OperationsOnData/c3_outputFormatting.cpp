#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Firstname " << "Lastname " << endl;
    cout << "Tony " << "Stark " << endl;
    cout << "Bruce " << "Banner " << endl;
    cout << "Stephen " << "Strange " << endl;

    cout << "\n-------------------------\n";
    // setw included in iomanip library
    cout << left; // this will align the output to left by default it will be alinged to right
    cout << setw(10) << "Firstname " << setw(10) << "Lastname " << endl;
    cout << setw(10) << "Tony " << setw(10) << "Stark " << endl;
    cout << setw(10) << "Bruce " << setw(10) << "Banner " << endl;
    cout << setw(10) << "Stephen " << setw(10) << "Strange " << endl; // setw is used to allocate the whole length even when they are whitespaces
    // other formatting manipulators are present in iomanip and ios library
    return 0;
}