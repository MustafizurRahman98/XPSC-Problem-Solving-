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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        map<ll, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        while (k--)
        {
            ll y, z;
            cin >> y >> z;
            auto it1 = mp.find(y);
            auto it2 = mp.find(z);

            if (it1 != mp.end() && it2 != mp.end())
            {
                int sz = mp[z].size()-1;
                if (mp[y][0] < mp[z][sz])
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}