#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    int xMaxN = 5;
    float xMin = 0.0, xMax = 10.0;
    string functionEquation = "(Cos[Pi*x]^(2*"; // while changing the function make sure to adjust it's range above
    string plotEquationPart1 = "Show[", plotEquationPart2 = "", completePlotEquation = "";
    for (int i = 1; i < (xMaxN + 1); i++)
    {
        plotEquationPart2 += "Plot[" + functionEquation + (to_string(i)) + "))" + ",{x," + (to_string(xMin)) + "," + (to_string(xMax)) + "}],";
    }
    plotEquationPart2.pop_back();
    string functionEquationForManipulate = "Sin[n+x]";
    string manipulateEquation = "Manipulate[Plot[" + functionEquationForManipulate + ",{x," + to_string(xMin) + "," + to_string(xMax) + "}, PlotStyle->{Orange,Thick}],{n,-10,10}]";
    completePlotEquation = plotEquationPart1 + plotEquationPart2 + "]";
    // cout << completePlotEquation << endl;

    // copying output to clipboard
    LPCSTR text = completePlotEquation.c_str();

    if (OpenClipboard(NULL))
    {
        EmptyClipboard();
        HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, strlen(text) + 1);
        if (hMem != NULL)
        {
            LPVOID memPtr = GlobalLock(hMem);
            strcpy((char *)memPtr, text);
            GlobalUnlock(hMem);
            SetClipboardData(CF_TEXT, hMem);
        }
        CloseClipboard();
    }
    cout << "Output copied to clipboard";
    return 0;
}