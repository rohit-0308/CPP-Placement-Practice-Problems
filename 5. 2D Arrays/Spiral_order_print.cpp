#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int row_start = 0, column_start = 0, row_end = n - 1, column_end = m - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        // for first-row
        for (int c = column_start; c <= column_end; c++)
            cout << a[row_start][c] << " ";
        row_start++;

        // for last-column
        for (int r = row_start; r <= row_end; r++)
            cout << a[r][column_end] << " ";
        column_end--;

        // for last-row
        for (int c = column_end; c >= column_start; c--)
            cout << a[row_end][c]<<" ";
        row_end--;

        // for first-column
        for (int r = row_end; r >= row_start; r--)
            cout << a[r][column_start]<<" ";
        column_start++;
    }

    return 0;
}