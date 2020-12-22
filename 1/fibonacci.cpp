#include <iostream>

using namespace std;

void fibonacci(int n)
{
    long long t1 = 0;
    long long t2 = 1;
    long long nextTerm;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << "  ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    return 0;
}