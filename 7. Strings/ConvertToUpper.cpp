#include "bits/stdc++.h"

using namespace std;

int main()
{
    string s = "asdyasugduky";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            s[i] -= 32; //ASCII code
    }
    cout << s << endl;

    // or we can we use inbuilt function

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
    return 0;
}