#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;

        if (s == "()")
        {
            cout << "NO" << endl;
        }
        else
        {
            int n = s.size();
            string t = "";
            for (int i = 0; i < n; i++)
            {
                t += '(';
            }
            for (int i = 0; i < n; i++)
            {
                t += ')';
            }

            int x = 0;
            int sum = 0;
            int l = 0, r = n - 1;
            while (r < t.size() && sum != n)
            {
                sum = 0;
                int idx = 0;
                for (int i = l; i <= r; i++)
                {
                    if (s[idx] == t[i])
                    {
                        sum++;
                        idx++;
                    }
                    else
                    {
                        break;
                    }
                }
                l++;
                r++;
            }

            if (sum == n)
            {
                t = "";
                for (int i = 0; i < n; i++)
                {
                    t += "()";
                }
            }

            cout << "YES" << endl;

            for (char c : t)
            {
                cout << c;
            }
            cout << endl;
        }
    }

    return 0;
}