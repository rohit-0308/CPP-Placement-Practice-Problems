#include "bits/stdc++.h"

using namespace std;

int main()
{
    string s = "AJBDKUGDKJN";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
            s[i] += 32; //ASCII code
    }
    cout << s << endl;

    // or we can we use inbuilt function
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;
    return 0;
}