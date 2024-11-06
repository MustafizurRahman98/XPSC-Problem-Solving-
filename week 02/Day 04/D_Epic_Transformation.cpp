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
        map<ll, int> mp;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        int mx = -1;
        for (auto it : mp)
        {
            int val = it.second;
            mx = max(mx, val);
        }

        if (mx <= n / 2)
        {
            if (n % 2 != 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            int y = n - mx;
            cout << n - y * 2 << endl;
        }
    }

    return 0;
}