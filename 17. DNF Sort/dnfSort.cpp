#include <iostream>

using namespace std;

void dnf(int a[], int n)
{
    int l = 0, mid = 0, h = n - 1;
    while (mid <= h)
    {
        if (a[mid] == 0)
        {
            swap(a[mid], a[l]);
            l++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[h]);
            h--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {0 ,2 ,1 ,2 ,0};
    dnf(a, 5);
    return 0;
}