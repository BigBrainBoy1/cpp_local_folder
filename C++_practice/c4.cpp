#include <iostream>
#include <ctime>
#include <time.h>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

int randNumGenerator()
{
    int randNum = (rand() % 3);
    return randNum;
}

int main()
{
    int age = 0;
    int initAmount = 1000, deposit = 0;
    int betAmount = 0, betLines = 0;
    int totalAmount = 0, linesWon = 0;
    int winnings = 0;
    const char *numArr = {"123"};
    int indexNumArr[3];
    const char *charArr = {"abc"};
    int indexCharArr[3];
    const char *symbolsArr = {"!@#"};
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
    cout << "You have " << initAmount << " amount!!" << endl;
    cout << "You can deposit more amount to your amount!!" << endl;
    while (true)
    {
        cout << "Deposit : ";
        cin >> deposit;
        if (deposit <= 50000)
        {
            break;
        }
        else if (deposit > 50000)
        {
            cout << "Too much deposit amount!!" << endl;
            deposit = 0;
        }
    }
    totalAmount = initAmount + deposit;
    cout << "You have " << (totalAmount) << " amount after deposit!!" << endl;
    cout << "How much do you want to bet on??" << endl;
    while (true)
    {
        cin >> betAmount;
        if (betAmount <= totalAmount)
        {
            cout << "Betting on " << betAmount << endl;
            break;
        }
        else if (betAmount > totalAmount)
        {
            cout << "Please enter valid amount!!" << endl;
            betAmount = 0;
        }
    }
    do
    {
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
        linesWon = 0;
        for (int i = 0; i < 3; i++)
        {
            randNum = randNumGenerator();
            cout << numArr[randNum] << " ";
            // this_thread::sleep_for(chrono::milliseconds(500));
            indexNumArr[i] = numArr[randNum];
        }
        if ((indexNumArr[0] == indexNumArr[1]) && indexNumArr[1] == indexNumArr[2])
        {
            cout << "BOOYEAH!!" << endl;
            linesWon += 1;
        }
        else
        {
            cout << endl;
        }
        // this_thread::sleep_for(chrono::seconds(1));
        for (int i = 0; i < 3; i++)
        {
            randNum = randNumGenerator();
            cout << charArr[randNum] << " ";
            // this_thread::sleep_for(chrono::milliseconds(500));
            indexCharArr[i] = charArr[randNum];
        }
        if ((indexCharArr[0] == indexCharArr[1]) && indexCharArr[1] == indexCharArr[2])
        {
            if (linesWon == 0)
            {
                cout << "BOOYEAH!!" << endl;
            }
            else if (linesWon == 1)
            {
                cout << "DOUBLE LOTTERY!!" << endl;
            }
            linesWon += 1;
        }
        else
        {
            cout << endl;
        }
        // this_thread::sleep_for(chrono::seconds(1));
        for (int i = 0; i < 3; i++)
        {
            randNum = randNumGenerator();
            cout << symbolsArr[randNum] << " ";
            // this_thread::sleep_for(chrono::milliseconds(500));
            indexSymbolsArr[i] = symbolsArr[randNum];
        }
        if ((indexSymbolsArr[0] == indexSymbolsArr[1]) && indexSymbolsArr[1] == indexSymbolsArr[2])
        {
            if (linesWon == 0)
            {
                cout << "BOOYEAH!!" << endl;
            }
            else if (linesWon == 1)
            {
                cout << "DOUBLE LOTTERY!!" << endl;
            }
            else if (linesWon == 2)
            {
                cout << "JACKPOT!!" << endl;
            }
            linesWon += 1;
        }
        else
        {
            cout << endl;
        }
        winnings = 0;
        if (linesWon == 0)
        {
            cout << "No winnings!!" << endl;
            totalAmount -= betAmount;
            cout << "Total amount : " << totalAmount << endl;
        }
        else if (linesWon != 0)
        {
            winnings = betAmount * linesWon;
            cout << "Winnings : " << (winnings) << endl;
            totalAmount += winnings;
            cout << "Total amount : " << totalAmount << endl;
        }
        if (totalAmount == 0)
        {
            cout << "No more amount left!!" << endl;
            break;
        }
        betAmount = 0;
        cout << "Enter amount to bet again or 0 to exit : ";
        // cin >> betAmount;
        while (true)
        {
            cin >> betAmount;
            if (betAmount <= totalAmount)
            {
                cout << "Betting on " << betAmount << endl;
                break;
            }
            else if (betAmount > totalAmount)
            {
                cout << "Please enter valid amount!!" << endl;
                betAmount = 0;
            }
        }
    } while (betAmount != 0);
    totalAmount = initAmount + (betAmount * linesWon);
    // cout << "Your total amount is ", totalAmount, "you can checkout now.";
    return 0;
}