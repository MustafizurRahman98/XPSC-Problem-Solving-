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
        ll k, n;
        cin >> k >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> b(k);
        
        ll idx = k - 1;
        for (ll i = n - 1; i > 0; i--)
        {
            b[idx] = a[i] - a[i - 1];
            idx--;
        }
        ll y = 0, x = a[0];
        for (ll i = idx; i > 0; i--)
        {
            b[i] = b[i + 1];
            y = x - b[idx];
            x = y;
        }

        b[0] = x;

        string ans = "Yes";
        for (ll i = 0; i < k - 1; i++)
        {
            if (b[i] > b[i + 1])
            {
                ans = "No";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}