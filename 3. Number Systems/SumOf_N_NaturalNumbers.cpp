#include <bits/stdc++.h>

using namespace std;

// Using FOR Loop
int Sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}

// Using Formula of Sum of N natural numbers

int SumFormula(int n)
{
    int sum = (n * (n + 1)) / 2;
    cout << sum << endl;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    Sum(n);
    SumFormula(n);
    return 0;
}