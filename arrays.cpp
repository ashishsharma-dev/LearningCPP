#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int number[7] = {2, 6, 8, 4, 5, 9, 3};
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < 7; i++)
    {
        if (number[i] > max)
        {
            max = number[i];
        }

        if (number[i] < min)
        {
            min = number[i];
        }
    }

    cout << "MAX: " << max << endl;
    cout << "MIN: " << min << endl;

    // printArray(number, 7);
}