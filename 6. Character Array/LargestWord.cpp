#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char a[n + 1];
    cin.getline(a, n);
    cin.ignore();

    int i = 0, currLen = 0, maxLen = 0;
    int st = 0, maxst = 0;
    while (true)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i + 1;
        }
        else
            currLen++;
        if (a[i] == '\0')
            break;

        i++;
    }
    cout << maxLen << endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout << a[i + maxst];
    }
    return 0;
}