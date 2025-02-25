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
        ll x = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] == 0)
            {
                if (x > 0)
                {
                    x++;
                }
            }
            else
            {
                x += a[i];
            }
        }
        cout << x << endl;
    }

    return 0;
}