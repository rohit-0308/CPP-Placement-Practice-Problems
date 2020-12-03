#include <iostream>

using namespace std;

int reverse(int n)
{
    int reversedNumber = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reversedNumber = reversedNumber * 10 + lastdigit;
        n = n / 10;
    }
    return reversedNumber;
}

int main()
{
    int n;
    cin >> n;
    int m = reverse(n);
    cout << m;
    return 0;
}