#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, cnt = 1;
    cin >> n >> m;
    map<ll, int> mp;
    vector<ll> a(n, 0);
    vector<int> b(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        ll x = a[i];
        mp[x]++;
        if (mp[x] == 1)
        {
            b[i + 1] = cnt;
            cnt++;
        }
        else
        {
            b[i + 1] = cnt - 1;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        cout << b[k] << endl;
    }

    return 0;
}