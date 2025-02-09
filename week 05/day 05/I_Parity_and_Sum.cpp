#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m = 0;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mxOdd = -1, ans = 0;

        vector<ll> b;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                b.push_back(a[i]);
            }
            else
            {
                mxOdd = max(mxOdd, a[i]);
            }
        }

        m = b.size();

        if (m == 0 || m == n)
        {
            cout << ans << endl;
        }
        else
        {
            sort(b.begin(), b.end());
            ans = m;
            for (ll i = 0; i < m; i++)
            {
                if (mxOdd < b[i])
                {
                    ans++;
                    break;
                }
                mxOdd += b[i];
            }
            cout << ans << endl;
        }
    }

    return 0;
}