#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int r = 0, c = m - 1;
    bool flag = false;
    while (r < n and c >= 0)
    {
        if (a[r][c] == k)
            flag = true;
        if (a[r][c] > k)
            c--;
        else
            r++;
    }
    if (flag)
        cout << "Found";
    else
    {
        cout << "Not Found";
    }

    return 0;
}