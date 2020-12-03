#include "bits/stdc++.h"

using namespace std;

bool isSafe(int **arr, int i, int j, int n)
{
    if (i < n && j < n && arr[i][j] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int **arr, int i, int j, int n, int **solArr)
{
    if ((i == n - 1) && (j == n - 1))
    {
        solArr[i][j] = 1;
        return true;
    }

    if (isSafe(arr, i, j, n))
    {
        solArr[i][j] = 1;

        if (ratInMaze(arr, i + 1, j, n, solArr))
        {
            return true;
        }

        if (ratInMaze(arr, i, j + 1, n, solArr))
        {
            return true;
        }
        solArr[i][j] = 0; //BactTracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    cout << endl;
    if (ratInMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}