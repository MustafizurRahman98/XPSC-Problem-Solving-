#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    ll l = 0, r = 0, ans = 0;

    while (l < n && r < m)
    {
        ll curr = a[l], cnt1 = 0, cnt2 = 0;
        while (l < n && a[l] == curr)
        {
            l++;
            cnt1++;
        }
        while (r < m && b[r] < curr)
        {
            r++;
        }
        while (r < m && b[r] == curr)
        {
            r++;
            cnt2++;
        }
        ans += cnt1 * cnt2;
    }

    cout << ans << endl;

    return 0;
}