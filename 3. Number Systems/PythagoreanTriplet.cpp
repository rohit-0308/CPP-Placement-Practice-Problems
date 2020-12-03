#include <bits/stdc++.h>

using namespace std;

bool PythagoreanTriplet(int a, int b, int c)
{
    int x = max(a, max(b, c));
    int y, z;
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }
    if (x * x == y * y + z * z)
        return true;
    else
        return false;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (PythagoreanTriplet(a, b, c))
    {
        cout << "Pythagorean Triplet";
    }
    else
    {
        cout << "Not a Pythagorean Triplet";
    }

    return 0;
}