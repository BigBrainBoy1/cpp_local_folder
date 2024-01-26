#include <iostream>

using namespace std;

int main()
{
    int a;
    try
    {
        a/0;
    }
    catch(const std::exception& e)
    {
        cout << "ERROR" << e.what() << endl;
    }
        
    return 0;
}