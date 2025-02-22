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
        int x, y;
        cin >> x >> y;

        int cell = ((ceil(y / 2.0)) * 15) - (y * 4);

        int ans = ceil(y / 2.0);

        if (x <= cell)
        {
            cout << ans << endl;
        }
        else
        {
            int a = x - cell;
            ans += ceil(a / 15.0);
            cout << ans << endl;
        }

    }

    return 0;
}