#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 1;

    // Pattern 1                            * * * * *
    //                                      * * * * *
    //                                      * * * * *
    //                                      * * * * *
    //                                      * * * * *

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 2                            1 1 1 1 1
    //                                      2 2 2 2 2
    //                                      3 3 3 3 3
    //                                      4 4 4 4 4
    //                                      5 5 5 5 5
    // When n == 5

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 3                            1 2 3 4 5
    //                                      1 2 3 4 5
    //                                      1 2 3 4 5
    //                                      1 2 3 4 5
    //                                      1 2 3 4 5
    // When n == 5
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 4                            5 4 3 2 1
    //                                      5 4 3 2 1
    //                                      5 4 3 2 1
    //                                      5 4 3 2 1
    //                                      5 4 3 2 1
    // When n == 5

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << n - j + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 5                            1 2 3 4 5
    //                                      6 7 8 9 10
    //                                      11 12 13 14 15
    //                                      16 17 18 19 20
    //                                      21 22 23 24 25
    // When n == 5

    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count;
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 5                            *
    //                                      * *
    //                                      * * *
    //                                      * * * *
    //                                      * * * * *
    // When n == 5

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 5                            1
    //                                      2 2
    //                                      3 3 3
    //                                      4 4 4 4
    //                                      5 5 5 5 5
    // When n == 5

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}