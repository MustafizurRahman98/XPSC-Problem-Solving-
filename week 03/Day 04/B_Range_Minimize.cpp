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
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = INT_MAX;
        if (n == 3)
        {
            cout << 0 << endl;
        }
        else
        {
            sort(a.begin(), a.end());
            int l = 0, r = n - 3;
            while (r < n)
            {
                ans = min(ans, (a[r] - a[l]));
                l++;
                r++;
            }

            cout << ans << endl;
        }
    }

    return 0;
}