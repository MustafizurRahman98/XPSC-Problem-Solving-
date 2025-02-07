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
        int k = ceil(n / 2.0);
        cout << k << endl;
        int l = 1, r = n * 3;
        while (l < r)
        {
            cout << l << " " << r << endl;
            l += 3;
            r -= 3;
        }
    }

    return 0;
}
