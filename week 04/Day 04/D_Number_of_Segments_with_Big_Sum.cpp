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

    ll sum = 0, ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum >= k)
        {
            ans += (n - r);
            sum -= a[l];
            l++;
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}