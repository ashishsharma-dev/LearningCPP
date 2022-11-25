#include <iostream>
#include <vector>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

vector<int> merger(vector<int> vect1, vector<int> vect2)
{
    vector<int> newVect;
    for (int i = 0; i < vect1.size(); i++)
    {
        newVect.push_back(vect1[i]);
    }

    for (int i = vect1.size() - 1; i < vect1.size() + vect2.size(); i++)
    {
        newVect.push_back(vect2[i]);
    }
    return newVect;
}

int main()
{
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    int ans = findUnique(arr, 7);
    cout << "The Unique Element is: " << ans << endl;
}