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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> b;
        int idx = 1;
        while (idx < n)
        {
            if (a[idx - 1] > a[idx])
            {
                break;
            }
            idx++;
        }

        for (int i = idx; i < n; i++)
        {
            b.push_back(a[i]);
        }

        if (b.empty())
        {
            cout << "Yes" << endl;
        }
        else if (is_sorted(b.begin(), b.end()))
        {
            if (a[0] >= b[b.size() - 1] || a[idx - 1] <= b[0])
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}