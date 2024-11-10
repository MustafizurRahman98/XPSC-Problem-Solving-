#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int idx = 1;

    int l = 0, r = 0, cnt = 1;
    while (r < m)
    {
        if (l >= n)
        {
            r++;
            ans.push_back(l);
        }
        else if (a[l] < b[r])
        {
            l++;
        }
        else
        {
            r++;
            ans.push_back(l);
        }
    }

    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}