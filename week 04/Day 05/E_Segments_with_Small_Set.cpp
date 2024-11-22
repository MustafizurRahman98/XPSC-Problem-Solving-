#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0; 
    int l = 0, r = 0, cnt = 0;  

    unordered_map<int, int> mp;  

    while (r < n)
    {

        if (mp[a[r]] == 0)     
        {
            cnt++;  
        }
        mp[a[r]]++;

        while (cnt > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
            {
                cnt--;
            }
            l++;
        }
        ans += (r - l + 1);
        r++;
    }

    cout << ans << endl;

    return 0;
}