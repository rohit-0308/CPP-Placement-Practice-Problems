#include "bits/stdc++.h"

using namespace std;

int firstocc(int a[], int n, int i, int key)
{
    if (i == n)
        return -1;
    if (a[i] == key)
        return i;
    return firstocc(a, n, i + 1, key);
}

int lastocc(int a[], int n, int i, int key)
{
    if (i == n)
        return -1;

    int restArray = lastocc(a, n, i + 1, key);
    if (restArray != -1)
        return restArray;

    if (a[i] == key)
        return i;

    return -1;
}

int main()
{
    int a[] = {4, 2, 15, 2, 5, 2, 6};
    cout << firstocc(a, 7, 0, 2) << " ";
    cout << lastocc(a, 7, 0, 2) << " ";
    return 0;
}