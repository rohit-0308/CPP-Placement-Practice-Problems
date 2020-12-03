#include <bits/stdc++.h>

using namespace std;

int convert(int n)
{
    int binary[32];
    int i = 0;
    while (n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    convert(n);
    return 0;
}