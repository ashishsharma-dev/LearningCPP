#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    // int n = 234;
    // int digit;
    // int lastDigit;
    // int sum = 0, product = 1;
    // while (n != 0)
    // {
    //     // cout << digit << " " << endl;
    //     lastDigit = n % 10;
    //     sum = sum + lastDigit;
    //     product = product * lastDigit;
    //     n = n / 10;
    // }

    // cout << sum << " " << product << endl;
    // cout << "The Subtract is: " << product - sum << endl;

    // Reverse Integer

    // int x = -567;
    // // Expected output = 765
    // long rev = 0, last;
    // while (x != 0)
    // {
    //     last = x % 10;
    //     rev = rev * 10 + last;
    //     x /= 10;
    // }

    // if (rev > INT_MAX || rev < INT_MIN)
    // {
    //     cout << 0 << endl;
    // }
    // else
    // {
    //     cout << rev << endl;
    // }

    // 1009. Complement of Base 10 Integer

    // Decimal to Binary

    // int rem = 0;
    // int nextDigit = 0;
    // int binary;
    // int i = 0;
    // while (n != 0)
    // {
    //     nextDigit = n / 2;
    //     rem = n % 2;
    //     binary = rem * (int)(pow(10, i)) + binary;

    //     // cout << (rem == 0) ? 1 : 0;

    //     n = n / 2;
    //     i++;
    // }
    // cout << binary;

    // Decimal to Binary using Bitwise operator
    // int i = 0;
    // long ans = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = bit * (int)(pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }

    // cout << "The ans is: " << ans;

    // Binary to Decimal
    // string strToCheck = to_string(n);
    // int sumOfPower;
    // for (int i = 0; i < strToCheck.length(); i++)
    // {
    //     if (strToCheck[i] != '0')
    //     {
    //         sumOfPower = sumOfPower + (int)(pow(2, i));
    //     }
    // }
    // cout << "The Decimal No is: " << sumOfPower << endl;

    // 231. Power of two

    // int i = 0;
    // bool isPowerOf2 = false;
    // while (i <= 30)
    // {
    //     if (n == pow(2, i))
    //     {
    //         isPowerOf2 = true;
    //     }
    //     i++;
    // }
    // cout << "The answer is: " << isPowerOf2 << endl;
}