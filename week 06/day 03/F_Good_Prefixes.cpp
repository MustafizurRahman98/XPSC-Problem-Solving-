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

        ll sum = 0, ans = 0, mx = LLONG_MIN;
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
            mx = max(mx, a[i]);
            if (sum % 2 == 0)
            {
                if ((sum - mx) == mx)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}