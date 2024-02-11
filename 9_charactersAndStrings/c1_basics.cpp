#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int noOfBlankCharacters = 0;
    char msg[] = {"dfyh serh sreth dxrty "};
    for (int i = 0; i < sizeof(msg); i++)
    {
        if (isblank(msg[i]))
        {
            cout << "Blank space found at index [" << i << "]" << endl;
            noOfBlankCharacters++;
        }
    }
    cout << "Total number of blank spaces found : " << noOfBlankCharacters;
    return 0;
}