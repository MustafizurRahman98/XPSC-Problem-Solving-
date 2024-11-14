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
        ll n, m, h;
        cin >> n >> m >> h;
        vector<ll> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll ans1 = 0;
        ll l = n - 1;
        ll r = m - 1;
        while (l >= 0 && r >= 0)
        {
            ll cap = a[l];
            ll outler = b[r];
            ans1 += min(cap, h * outler);
            l--;
            r--;
        }
        ll ans2 = 0;
        l = 0;
        r = 0;
        while (l < n && r < m)
        {
            ll cap = a[l];
            ll outler = b[r];
            ans2 += min(cap, h * outler);
            l++;
            r++;
        }

        cout << max(ans1, ans2) << endl;
    }

    return 0;
}
