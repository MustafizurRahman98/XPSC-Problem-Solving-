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
        string s;
        cin >> s;
        int l = 0, r = 0, cnt = 0, ans = INT_MAX;
        while (r < n)
        {
            if (s[r] == 'W')
            {
                cnt++;
            }
            if (r - l + 1 == k)
            {
                ans = min(ans, cnt);
                if (s[l] == 'W')
                {
                    cnt--;
                }
                l++;
            }
            r++;
        }
        cout << ans << endl;
    }

    return 0;
}