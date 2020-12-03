#include "bits/stdc++.h"

using namespace std;

void kadanes_algo(int a[], int n)
{
    int max_so_far = 0, max_ending_here = 0;
    int start = 0, end = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        // Either this approach or the next one
        // max_ending_here += a[i];
        // if (max_so_far < max_ending_here)
        // {
        //     max_so_far = max_ending_here;
        //     start = s;
        //     end = i;
        // }
        // if (max_ending_here < 0)
        // {
        //     max_ending_here = 0;
        //     s = i + 1;
        // }

        //More optimised than the first one
        max_ending_here += a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        else if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    // cout<<start<<" "<<end<<endl;
    cout << max_so_far;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    kadanes_algo(a, n);
    return 0;
}