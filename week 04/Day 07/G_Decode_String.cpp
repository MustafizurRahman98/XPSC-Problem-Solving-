#include <bits/stdc++.h>
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            a[i] = c - 48;
        }

        string ans = "";

        int r = n - 1;
        while (r >= 0)
        {
            if (a[r] != 0)
            {
                ans += a[r] + 96;
            }
            else
            {
                r--;
                int x = a[r];
                r--;
                x += a[r] * 10;
                ans += x + 96;
            }
            r--;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}