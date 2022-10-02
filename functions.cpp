#include <iostream>
using namespace std;

// Same power task performed with functions in CPP

int power(int a, int b)
{
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    return ans;
}

// Check if number odd or even with function

bool isEven(int num)
{
    return num % 2 == 0;
}

// Factorial with function

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

// Simple print function without return keyword

void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

// nCr with function
int ncr(int n, int r)
{
    int ans = 1;
    int num = factorial(n);
    int deno = factorial(r) * factorial(n - r);

    ans = num / deno;
    return ans;
}

// Function for checking a number while it is prime or not

bool isPrime(int num)
{
    int i = 2;
    bool primeCheck = true;
    while (i < num)
    {
        if (num % i == 0)
        {
            return primeCheck = false;
        }
        i++;
    }
    return primeCheck;
}

int main()
{
    // Declaring power of a number

    // int ans = power(2, 0);
    // int num = 5;
    // cout << isEven(num) << endl;
    // int ans = ncr(8, 2);
    // int n = 28;

    // int primeCheck = isPrime(n);
    // if (primeCheck)
    // {
    //     cout << "The number is prime" << endl;
    // }
    // else
    // {
    //     cout << "Not Prime" << endl;
    // }

    // printCounting(50);

    // cout << ans << endl;
}