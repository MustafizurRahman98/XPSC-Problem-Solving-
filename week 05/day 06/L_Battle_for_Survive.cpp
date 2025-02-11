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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l = 0, r = n - 2;
        while (l < r)
        {
            a[r] = a[r] - a[l];
            l++;
        }

        a[n - 1] = a[n - 1] - a[r];

        cout << a[n - 1] << endl;
    }

    return 0;
}