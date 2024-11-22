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
        ll sum = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        string st;
        cin >> st;

        int l = 0, r = n - 1;
        while (true)
        {
            while (l < n)
            {
                if (st[l] == 'L')
                {
                    break;
                }
                sum -= a[l];
                l++;
            }
            while (r >= 0)
            {
                if (st[r] == 'R')
                {
                    break;
                }
                sum -= a[r];
                r--;
            }
            if (l < r)
            {
                ans += sum;
                sum -= a[l];
                l++;
                sum -= a[r];
                r--;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}