#include <iostream>
using namespace std;

void update(int arr[], int size)
{
    // This will update the content of actual array
    arr[0] = 120;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int sumOfAll(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    // int arr[3] = {1, 2, 3};

    // update(arr, 3);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    // return 0;

    // Sum of all element of an array
    int arr[5] = {1, 2, 3, 8, 9};
    int sum = sumOfAll(arr, 5);
    cout << sum << endl;
}