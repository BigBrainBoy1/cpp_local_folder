#include <iostream>
#include <ctime>
#include <time.h>
#include <cstdlib>

using namespace std;

int randNumGenerator()
{
    int randNum = (rand() % 6);
    return randNum;
}

int main()
{
    int age = 0;
    int initBalance = 1000, deposit = 0, betAmount = 0, betLines = 0, totalAmount = 0;
    const char *numArr = {"123123"};
    int indexNumArr[3];
    const char *charArr = {"abcabc"};
    int indexCharArr[3];
    const char *symbolsArr = {"!@#$%&"};
    int indexSymbolsArr[3];
    int randNum;
    string name = "";
    cout << "Welcome to this game!!" << endl;
    // cout << "Your name : ";
    // cin >> name;
    // cout << "Enter your age : ";
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "Welcome to casino game!! " << name << endl;
    // }
    // else if (age < 18)
    // {
    //     cout << "You cannot proceed further!! " << name << endl;
    // }
    // cout << "You have " << initBalance << " balance!!" << endl;
    // cout << "You can deposit more amount to your balance!!" << endl;
    // while (true)
    // {
    //     cout << "Deposit : ";
    //     cin >> deposit;
    //     if (deposit <= 50)
    //     {
    //         break;
    //     }
    //     else if (deposit > 50)
    //     {
    //         cout << "Too much deposit amount!!" << endl;
    //         deposit = 0;
    //     }
    // }
    // totalAmount = initBalance + deposit;
    // cout << "You have " << (totalAmount) << " balance after deposit!!" << endl;
    // cout << "How much do you want to bet on??" << endl;
    // while (true)
    // {
    //     cin >> betAmount;
    //     if (betAmount <= totalAmount)
    //     {
    //         cout << "Betting on " << betAmount << endl;
    //         break;
    //     }
    //     else if (betAmount > totalAmount)
    //     {
    //         cout << "Please enter valid amount!!" << endl;
    //         betAmount = 0;
    //     }
    // }
    // cout << "How many lines do you want to bet on??" << endl;
    // while (true)
    // {
    //     cin >> betLines;
    //     if (betLines >= 1 && betLines <= 3)
    //     {
    //         cout << "Betting on " << betLines << " lines" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "Enter valid amount " << endl;
    //         betLines = 0;
    //     }
    // }
    srand(time(0));
    for (int i = 0; i < 3; i++)
    {
        randNum = randNumGenerator();
        cout << numArr[randNum] << " ";
        indexNumArr[i] = numArr[randNum];
    }
    if ((indexNumArr[0] == indexNumArr[1]) && indexNumArr[1] == indexNumArr[2])
    {
        cout << "BOOYEAH" << endl;
    }
    else{
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        randNum = randNumGenerator();
        cout << charArr[randNum] << " ";
        indexCharArr[i] = charArr[randNum];
    }
    if ((indexCharArr[0] == indexCharArr[1]) && indexCharArr[1] == indexCharArr[2])
    {
        cout << "BOOYEAH" << endl;
    }
    else{
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        randNum = randNumGenerator();
        cout << symbolsArr[randNum] << " ";
        indexSymbolsArr[i] = symbolsArr[randNum];
    }
    if ((indexSymbolsArr[0] == indexSymbolsArr[1]) && indexSymbolsArr[1] == indexSymbolsArr[2])
    {
        cout << "BOOYEAH" << endl;
    }
    return 0;
}