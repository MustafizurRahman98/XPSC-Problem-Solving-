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

        for (ll i = 1; i < n; i++)
        {
            a[i] = a[i] - a[i - 1];
        }

        for (ll v : a)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}