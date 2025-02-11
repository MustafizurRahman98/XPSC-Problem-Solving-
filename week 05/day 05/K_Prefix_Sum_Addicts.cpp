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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        if (k == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            vector<ll> b(n);
            ll j = n - 1;
            for (ll i = k - 1; i >= 1; i--)
            {
                b[j] = a[i] - a[i - 1];
                j--;
            }

            for (j; j >= 0; j--)
            {
                b[j] = b[j + 1];
                a[0] -= b[j];
            }

            b[0] += a[0];

            string ans = "Yes";
            for (ll i = 0; i < n - 1; i++)
            {
                if (b[i] > b[i + 1])
                {
                    ans = "No";
                    break;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}