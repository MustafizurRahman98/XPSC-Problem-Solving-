#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    a.erase(remove(a.begin(), a.end(), x), a.end());

    for (ll v : a)
    {
        cout << v << " ";
    }

    return 0;
}