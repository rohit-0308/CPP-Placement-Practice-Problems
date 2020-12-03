#include <bits/stdc++.h>

using namespace std;

void convert(int n)
{
    char a[32];
    int i;
    while (n != 0)
    {
        int temp = 0;
        temp = n % 16;
        if (temp < 10)
        {
            a[i] = temp + 48;
            i++;
        }
        else if (temp >= 10)
        {
            a[i] = temp + 55;
            i++;
        }
        n /= 16;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j];
    }
}

int main()
{
    int n;
    cin >> n;
    convert(n);
    return 0;
}