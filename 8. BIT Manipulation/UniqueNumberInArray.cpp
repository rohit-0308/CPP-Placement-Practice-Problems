// Only one unique number is present in the array

#include "bits/stdc++.h"

using namespace std;

int unique(int a[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ a[i];
    }
    return xorSum;
}

int main()
{
    int a[] = {2, 3, 4, 5, 4, 2, 3};
    cout << unique(a, 7);
    return 0;
}