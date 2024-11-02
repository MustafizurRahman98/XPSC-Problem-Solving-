#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<char> v(a);
        sort(v.begin(), v.end());
        auto last = unique(v.begin(), v.end());
        v.erase(last, v.end());

        map<char, char> mp;
        int sz1 = v.size(), sz2 = 0;
        sz2 = sz1 - 1;
        for (int i = 0; i < sz1; i++)
        {
            mp[v[i]] = v[sz2 - i];
        }

        for (char c : a)
        {
            cout << mp[c];
        }
        cout << endl;

    }

    return 0;
}