#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;

int randFunction()
{
    int randNum = rand() % 3;
    return randNum;
}

void slotMachine()
{
    int numArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    const char *charArr = {"abcdefghi"};
    const char *symbolsArr = {"!@#$%^&*?"};
    cout << "|";
    for (int i = 0; i < 3; i++)
    {
        cout << numArr[randFunction()] << "|";
    }
    cout << endl;
    cout << endl;
    cout << "|";
    for (int i = 0; i < 3; i++)
    {
        cout << charArr[randFunction()] << "|";
    }
    cout << endl;
    cout << endl;
    cout << "|";
    for (int i = 0; i < 3; i++)
    {
        cout << symbolsArr[randFunction()] << "|";
    }
}

int main()
{
    int age = 0;
    int balance = 0, bet = 0;
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
    // balance = 1000;
    // cout << "You have " << balance << " balance" << endl;
    // cout << "How much do you want to bet on??" << endl;
    // if (bet <= balance)
    // {
    //     cin >> bet;
    //     cout << "Bet on " << bet;
    // }
    // else if (bet > balance)
    // {
    //     cout << "Please enter valid amount!!";
    // }
    slotMachine();
    return 0;
}