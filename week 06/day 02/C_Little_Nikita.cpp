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
        ll n, m;
        cin >> n >> m;
        if (m <= n)
        {
            if ((n % 2 == 0 && m % 2 == 0) || (n % 2 != 0 && m % 2 != 0))
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