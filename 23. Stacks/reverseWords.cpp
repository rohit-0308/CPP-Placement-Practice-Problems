#include <iostream>
#include <string>
#include <stack>

using namespace std;

void reverse(string s)
{
    stack<string> st;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            st.push(temp);
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    st.push(temp);
    while (!st.empty())
    {
        temp = st.top();
        cout << temp << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    string s;
    getline(cin, s);
    reverse(s);
    return 0;
}