#include "bits/stdc++.h"

using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0); //will return 1 if true or 0 if false
}

int main()
{
    cout << getBit(5, 2) << endl;
    return 0;
}