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

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

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

    // Pattern 6                            1
    //                                      2 2
    //                                      3 3 3
    //                                      4 4 4 4
    //                                      5 5 5 5 5
    // When n == 5

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 7                            1
    //                                      2 3
    //                                      4 5 6
    //                                      7 8 9 10
    //                                      11 12 13 14 15
    // When n == 5

    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 8                            1
    //                                      2 3
    //                                      3 4 5
    //                                      4 5 6 7
    //                                      5 6 7 8 9
    // When n == 5

    // Using Count variable
    // while (i <= n)
    // {
    //     int j = 1;
    //     int count = i;
    //     while (j <= i)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Without Using Count Variable

    // while (i <= n)
    // {
    //     int j = 1;
    //     // int count = i;
    //     while (j <= i)
    //     {
    //         cout << i+j-1 << " ";
    //         // count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 9                            1
    //                                      2 1
    //                                      3 2 1
    //                                      4 3 2 1
    //                                      5 4 3 2 1
    // When n == 5

    // while (i <= n)
    // {
    //     int j = 1;
    //     // int count = i;
    //     while (j <= i)
    //     {
    //         cout << i - j + 1 << " ";
    //         // count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 10                           A A A A A
    //                                      B B B B B
    //                                      C C C C C
    //                                      D D D D D
    //                                      E E E E E
    // When n == 5

    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {
    //         cout << char('A' + i - 1) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 11                           A B C D E
    //                                      A B C D E
    //                                      A B C D E
    //                                      A B C D E
    //                                      A B C D E
    // When n == 5

    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {
    //         cout << char('A' + j - 1) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 12                           A B C D E
    //                                      F G H I J
    //                                      K L M N O
    //                                      P Q R S T
    //                                      U V W X Y
    // When n == 5

    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {
    //         cout << char('A' + count - 1) << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 13                           A B C D E
    //                                      C D E F G
    //                                      E F G H I
    //                                      G H I J K
    //                                      I J K L M
    // When n == 5

    // while (i <= n)
    // {
    //     int j = 1;
    //     int count = i;

    //     while (j <= n)
    //     {
    //         cout << char('A' + count - 1) << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Another way to solve the same problem

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << char('A' + i + j - 2) << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 14                           A
    //                                      B B
    //                                      C C C
    //                                      D D D D
    //                                      E E E E E
    // When n == 5

    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A' + count - 1;
    //         cout << ch << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 15                           A
    //                                      B C
    //                                      C D E
    //                                      D E F G
    //                                      E F G H I
    // When n == 5

    // while (i <= n)
    // {
    //     int j = 1;
    //     // int count = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A' + i + j - 2;
    //         cout << ch << " ";
    //         // count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 16                           E
    //                                      D E
    //                                      C D E
    //                                      B C D E
    //                                      A B C D E
    // When n == 5

    // while (i <= n)
    // {
    //     int j = 1;
    //     // int count = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A' + n - i + j - 1;
    //         cout << ch << " ";
    //         // count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 16                            *
    //                                     * *
    //                                   * * *
    //                                 * * * *
    //                               * * * * *
    // When n == 5

    // while (i <= n)
    // {
    //     // Printing spaces
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     // Printing stars
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << '*';
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 17                            * * * * *
    //                                       * * * *
    //                                       * * *
    //                                       * *
    //                                       *
    // When n == 5

    // while (i <= n)
    // {
    //     // Printing stars
    //     int j = 1;
    //     while (j <= (n - i + 1))
    //     {
    //         cout << '*';
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 18                          * * * * *
    //                                       * * * *
    //                                         * * *
    //                                           * *
    //                                             *
    // When n == 5

    // while (i <= n)
    // {
    //     // Printing spaces
    //     int space = i - 1;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     // Printing stars
    //     int j = 1;
    //     while (j <= (n - i + 1))
    //     {
    //         cout << '*';
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 19                                   1
    //                                            1 2 1
    //                                          1 2 3 2 1
    //                                        1 2 3 4 3 2 1
    //                                      1 2 3 4 5 4 3 2 1
    // When n == 5

    // while (i <= n)
    // {
    //     // Printing spaces
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     // Printing stars
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     int k = j - 2;
    //     while (k >= 1)
    //     {
    //         cout << k;
    //         k--;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 20                          1 2 3 4 5 5 4 3 2 1
    //                                     1 2 3 4 * * 4 3 2 1
    //                                     1 2 3 * * * * 3 2 1
    //                                     1 2 * * * * * * 2 1
    //                                     1 * * * * * * * * 1
    // When n == 5

    while (i <= n)
    {
        // Printing first
        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << j << " ";
            j++;
        }

        // Printing stars (second)
        int stars = 3;
        while (stars <= i * 2)
        {
            cout << '*' << " ";
            stars++;
        }

        // Printing third

        int third = n - i + 1;
        while (third >= 1)
        {
            cout << third << " ";
            third--;
        }
        cout << endl;
        i++;
    }
}