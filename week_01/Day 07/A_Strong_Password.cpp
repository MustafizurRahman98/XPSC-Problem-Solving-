#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        stack<char> st, st2;
        string s;
        cin >> s;
        int flag = 1;
        for (char c : s)
        {
            if (flag && !st.empty() && st.top() == c)
            {
                char ch = c + 1;
                if (ch > 'z')
                {
                    ch = 'a';
                }
                st.push(ch);
                st.push(c);
                flag = 0;
            }
            else
            {
                st.push(c);
            }
        }
        if (flag)
        {
            char ch = st.top();
            ch = ch + 1;
            if (ch > 'z')
            {
                ch = 'a';
            }
            st.push(ch);
        }
        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        while (!st2.empty())
        {
            cout << st2.top();
            st2.pop();
        }
        cout << endl;
    }

    return 0;
}
