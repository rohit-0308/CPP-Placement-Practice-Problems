#include <bits/stdc++.h>

using namespace std;

int convert(int n)
{
    int i = 0;
    int a[32];
    while (n > 0)
    {
        a[i] = n % 8;
        n /= 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << a[j];
    return 0;
}

int main()
{
    int n;
    cin >> n;
    convert(n);
    return 0;
}