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
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll answer = 0;
        for (ll i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            if (ch == 'R')
            {
                a[i] = n - i - 1;
            }
            else
            {
                a[i] = i;
            }
            answer += a[i];
        }

        sort(a.begin(), a.end());

        for (ll i = 0; i < n; i++)
        {
            ll x = a[i];
            answer -= x;
            x = max(x, n - x - 1);
            answer += x;
            cout << answer << " ";
        }
        cout << endl;
    }

    return 0;
}