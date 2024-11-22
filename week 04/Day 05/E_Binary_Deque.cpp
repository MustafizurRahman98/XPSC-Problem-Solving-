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
        ll k, sum = 0;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        ll ans = LLONG_MAX, tmp = 0;
        ll l = 0, r = 0;

        if (sum == k)
        {
            cout << 0 << endl;
        }
        else if (sum < k)
        {
            cout << -1 << endl;
        }
        else
        {
            while (r < n)
            {
                tmp += a[r];
                if (tmp == k)
                {
                    ans = min(ans, (l + (n - r - 1)));
                }
                while (tmp > k)
                {
                    tmp -= a[l];
                    l++;
                }
                r++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}