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
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n);
        vector<ll> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        ll ans = LLONG_MIN, sum = 0;
        ll l = 0, r = 0;

        while (r < n)
        {
            sum += a[r];
            if (sum <= k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (sum > k)
                {
                    sum -= a[l];
                    l++;
                }
                if (sum <= k)
                {
                    ans = max(ans, r - l + 1);
                }
            }

            if (r < n - 1 && h[r] % h[r + 1] != 0)
            {
                l = r + 1;
                sum = 0;
            }
            r++;
        }

        cout << ans << endl;
    }
    return 0;
}