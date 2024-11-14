#include <bits/stdc++.h>
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        int idx = n - 1;
        for (idx; idx >= 0; idx--)
        {
            int tmp = a[idx];
            if (mp[tmp] != 0)
            {
                break;
            }
            mp[tmp]++;
        }
        cout << idx + 1 << endl;
    }

    return 0;
}