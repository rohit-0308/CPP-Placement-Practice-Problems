#include "bits/stdc++.h"

using namespace std;

void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[4] = {1, 2, 3, 4};
    subsets(a, 4);
    return 0;
}