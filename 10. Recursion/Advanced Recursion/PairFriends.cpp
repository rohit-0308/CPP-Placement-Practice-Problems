#include <iostream>

using namespace std;

int pairFriends(int n)
{
    if (n == 0 || n == 1 || n == 2)
        return n;

    return pairFriends(n - 1) + pairFriends(n - 2) * (n - 1);
}

int main()
{
    cout << pairFriends(4);
    return 0;
}