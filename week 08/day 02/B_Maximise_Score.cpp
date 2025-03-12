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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int scor = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int bobScr = 0;
            if (i > 0)
            {
                bobScr = max(bobScr, abs(a[i] - a[i - 1]));
            }
            if (i < n - 1)
            {
                bobScr = max(bobScr, abs(a[i] - a[i + 1]));
            }

            scor = min(scor, bobScr);
           
        }

        cout << scor << endl;
    }

    return 0;
}