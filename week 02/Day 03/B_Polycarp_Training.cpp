#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int ans = 0;

    int d = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= d)
        {
            ans++;
            d++;
        }
    }
    cout << ans << endl;

    return 0;
}