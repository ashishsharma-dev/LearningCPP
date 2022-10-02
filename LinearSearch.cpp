#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

void swap(int arr[], int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

void reverse(int arr[], int size)
{
    // for (int i = 0; i < size / 2; i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[size - 1 - i];
    //     arr[size - 1 - i] = temp;
    // }

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void reverseAlt(int arr[], int size)
{
    int n = 0;
    int m = 1;

    while (m <= size)
    {

        swap(arr[n], arr[m]);

        n += 2;
        m += 2;
    }
}

int main()
{
    // int arr[10] = {5, 4, 2, 6, 9, -4, 6, 8, -2, 6};
    int arr[6] = {1, 2, 3, 4, 5, 6};
    print(arr, 6);
    cout << endl;
    // swap(arr, 5, 4);
    reverseAlt(arr, 6);
    print(arr, 6);
    // reverse(arr, 10);
    // int key;
    // cout << "Enter the num to find in array: ";
    // cin >> key;

    // search(arr, 10, key) ? cout << "Element found!" : cout << "Element is not available in the array";
}