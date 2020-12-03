#include "bits/stdc++.h"

using namespace std;

int kadane(int a[], int n)
{
    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += a[i];
        if (currSum < 0)
            currSum = 0;
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int wrapSum;
    int nonwrarpSum = kadane(a, n);

    int totalSum=0;
    for (int i = 0; i < n; i++)
    {
        totalSum+=a[i];
        a[i] = -a[i];
    }
    wrapSum=totalSum+kadane(a,n);

    cout<<max(wrapSum,nonwrarpSum);
    return 0;
}