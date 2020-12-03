#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int count, j = 0;
    while (a[j] <= 0)
        j++;
    count = 1;
    while (j < n)
    {
        if (count == a[j])
        {
            count++;
        }
        else
        {
            cout << count;
            return 0;
        }
        j++;
    }
    return 0;
}