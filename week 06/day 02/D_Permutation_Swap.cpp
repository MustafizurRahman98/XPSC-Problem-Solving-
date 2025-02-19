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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> num;

        for (ll i = 1; i <= n; i++)
        {
            ll x = abs(a[i - 1] - i);
            if (x != 0)
            {
                num.push_back(x);
            }
        }
        ll ans = num[0];
        for (ll v : num)
        {
            ans = __gcd(ans, v);
        }
        cout << ans << endl;
    }

    return 0;
}