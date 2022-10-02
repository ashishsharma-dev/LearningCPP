#include <iostream>
using namespace std;

void update(int n)
{
    n = n / 2;
    cout << n << endl; // Here the output will be 5
}

int update2(int n)
{
    n -= 5;
    return n;
}
int update3(int n)
{
    int ans = n * n;
    return ans;
}

int main()
{
    int n = 10;
    // update(n); // The output will be 5
    // update2(15);
    n = update3(5);
    cout << n << endl; // The output will be 10 because of pass by value
}