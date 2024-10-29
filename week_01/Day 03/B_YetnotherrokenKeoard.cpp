#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int b = 0, B = 0;
        stack<char> st;
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        for (char c : s)
        {
            if (c == 'b')
            {
                b++;
            }
            else if (c == 'B')
            {
                B++;
            }
            else
            {
                if (islower(c) && b > 0)
                {
                    b--;
                }
                else if (isupper(c) && B > 0)
                {
                    B--;
                }
                else
                {
                    st.push(c);
                }
            }
        }

        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }

    return 0;
}