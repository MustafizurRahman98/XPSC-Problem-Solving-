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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }

        ll l = 0, r = 0;
        ll ansL = 0, ansR = 0;
        ll mx = 0;

        vector<pair<ll, ll>> b;
        for (auto pr : mp)
        {
            if (pr.second >= k)
            {
                b.push_back({pr.first, pr.second});
            }
        }

        ll sz = b.size();

        while (r < sz - 1)
        {
            ll val = b[r].first;
            ll val2 = b[r + 1].first;
            if (val + 1 == val2)
            {
                r++;
            }
            else
            {
                r++;
                l = r;
            }
            if (r - l > mx)
            {
                mx = r - l;
                ansL = l;
                ansR = r;
            }
        }

        if (sz==0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b[ansL].first << " " << b[ansR].first << endl;
        }
    }

    return 0;
}