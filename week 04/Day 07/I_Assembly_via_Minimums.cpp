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
        ll N = n * (n - 1) / 2;
        vector<ll> a(N);
        for (ll i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int I = 1;
        for (ll i = 0; i < N; i += n - I, I++)
        {
            cout << a[i] << " ";
        }
        cout << 1000000000 << endl;
    }

    return 0;
}