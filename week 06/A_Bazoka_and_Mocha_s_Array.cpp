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

        vector<ll> x, y;
        ll xx = a[0];
        x.push_back(xx);
        int idx = 1;
        while (idx < n)
        {
            if (a[idx] >= xx)
            {
                x.push_back(a[idx]);
                xx = a[idx];
            }
            else
            {
                break;
            }
            idx++;
        }

        while (idx < n)
        {
            y.push_back(a[idx]);
            idx++;
        }

        for (ll v : x)
        {
            cout << v << ", ";
        }
        cout << endl;
        for (ll v : y)
        {
            cout << v << " ";
        }
        cout << endl;

        
    }

    return 0;
}