#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int digit;
    int n = 12;

    while (n != 0)
    {
        digit = n % 10;
        cout << digit << endl;
        if (n % digit == 0)
        {
            count = count + 1;
        }
        n /= 10;
    }
    cout << count << endl;
}