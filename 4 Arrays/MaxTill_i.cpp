#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int Max = INT_MIN;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        Max = max(Max, a[i]);
        cout << Max << endl;
    }
    return 0;
}