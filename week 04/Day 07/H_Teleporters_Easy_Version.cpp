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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += i + 1;
        }
        sort(a.begin(), a.end());
        
        int cnt = 0;
        for (ll v : a)
        {
            if (k >= v)
            {
                k -= v;
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}