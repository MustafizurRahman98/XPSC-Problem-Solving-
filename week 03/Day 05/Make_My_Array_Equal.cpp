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
        unordered_map<ll, int> mp;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x != 0)
            {
                mp[x]++;
            }
        }
        if (mp.size() == 0 || mp.size() == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}