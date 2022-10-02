#include <iostream>
using namespace std;

int main()
{
    // CPP Calculator

    // cout << "CPP Calculator 1.0" << endl;
    // int n, m;
    // char oper;

    // cin >> n;
    // cin >> oper;
    // cin >> m;

    // switch ((int)oper)
    // {
    // case 43:
    //     cout << "The answer is " << n + m;
    //     break;

    // case 45:
    //     cout << "The answer is " << n - m;
    //     break;

    // case 47:
    //     cout << "The answer is " << n / m;
    //     break;

    // case 37:
    //     cout << "The answer is " << n % m;
    //     break;

    // case 42:
    //     cout << "The answer is " << n * m;
    //     break;
    // default:
    //     break;
    // }

    // + = 43, - = 45, / = 47, % = 37, * = 42

    // Notes Finder

    int amount;
    std::cout << "Enter the amount to find notes of 100 50 20 & 1" << endl;
    cin >> amount;

    int _100s = 0;
    int _50s = 0;
    int _20s = 0;
    int _1s = 0;

    switch (amount >= 100)
    {
    case 1:
        _100s = amount / 100;
        amount = amount % 100;
    }

    switch (amount >= 50)
    {
    case 1:
        _50s = amount / 50;
        amount = amount % 50;
    }

    switch (amount >= 20)
    {
    case 1:
        _20s = amount / 20;
        amount = amount % 20;
    }

    switch (amount >= 1)
    {
    case 1:
        _1s = amount / 1;
        amount = amount % 1;
    }

    std::cout << "Notes of 100: " << _100s << endl;
    std::cout << "Notes of 50: " << _50s << endl;
    std::cout << "Notes of 20: " << _20s << endl;
    std::cout << "Notes of 1: " << _1s << endl;
}
