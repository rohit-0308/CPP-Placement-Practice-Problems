#include "bits/stdc++.h"

using namespace std;

bool pairSum(int a[], int n, int k)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (a[low] + a[high] == k){
            return true;
        }
        else if (a[low] + a[high] < k)
            low++;
        else
            high++;
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << pairSum(a, n, k) << endl;
    return 0;
}