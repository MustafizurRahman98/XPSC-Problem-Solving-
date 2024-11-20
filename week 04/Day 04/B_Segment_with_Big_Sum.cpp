#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0;
    int l = 0, r = 0, ans = INT_MAX;
    while (r <= n)
    {
        if (sum >= k)
        {
            ans = min(ans, r - l);
            sum -= a[l];
            l++;
        }
        else
        {
            if (r == n)
            {
                break;
            }
            sum += a[r];
            r++;
        }
    }

    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}