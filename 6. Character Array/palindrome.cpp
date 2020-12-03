#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[n + 1];
    cin >> a;

    bool flag = 1;

    for (int i = 0; i < n/2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "Word is palindrome";
    else
        cout << "word is not palindrome";
    return 0;
}