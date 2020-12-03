#include <bits/stdc++.h>

using namespace std;

int convert(string s)
{
    int ans = 0;
    int x = 1;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            ans += x * (s[i] - '0');
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            ans += x * (s[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << convert(s);
    return 0;
}