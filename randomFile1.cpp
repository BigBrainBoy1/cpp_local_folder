#include <iostream>

using namespace std;

int main()
{
    int noOfRows, noOfColoumns;
    cout << "Enter number of rows : ";
    cin >> noOfRows;
    cout << "Enter number of coloumns : ";
    cin >> noOfColoumns;
    for (int i = 0; i < noOfRows; i++)
    {
        for (int j = 0; j < noOfColoumns; j++)
        {
            cout << i + 1 << j + 1;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}