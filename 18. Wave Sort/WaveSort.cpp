#include <iostream>

using namespace std;

void waveSort(int a[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] > a[i - 1])
        {
            swap(a[i], a[i - 1]);
        }
        if (a[i] > a[i + 1] && i <= n - 1)
        {
            swap(a[i], a[i + 1]);
        }
    }
}

int main()
{
    int a[] = {1, 3, 4, 7, 5, 6, 2};
    waveSort(a, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}