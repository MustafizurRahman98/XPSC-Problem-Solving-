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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<ll, ll> frq;
        for (ll val : a)
        {
            frq[val]++;
        }

        ll mxVal = 0;
        for (ll v : a)
        {
            mxVal = max(mxVal, frq[v]);
        }

        ll other = n - mxVal;
        ll ans = 0;
        while (mxVal < n)
        {
            mxVal *= 2;
            ans++;
        }

        cout << ans + other << endl;
    }

    return 0;
}