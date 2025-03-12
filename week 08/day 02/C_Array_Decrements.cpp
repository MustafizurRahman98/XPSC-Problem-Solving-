#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int diff = 0, mxVal = 0;
        for (int i = 0; i < n; i++)
        {
            if (mxVal < a[i])
            {
                mxVal = a[i];
                diff = a[i] - b[i];
            }
        }

        if (diff < 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            string ans = "YES";
            for (int i = 0; i < n; i++)
            {
                if (b[i] == 0)
                {
                    if (a[i] - b[i] > diff)
                    {
                        ans = "NO";
                        break;
                    }
                }
                else
                {
                    if (a[i] - b[i] != diff)
                    {
                        ans = "NO";
                        break;
                    }
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}