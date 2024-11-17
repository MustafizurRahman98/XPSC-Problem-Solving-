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
        string st;
        cin >> st;
        int count0 = 0, trk0 = 0;
        int count1 = 0, trk1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (trk0 == 0 && st[i] == '0')
            {
                count0++;
                trk0 = 1;
            }
            else if (st[i] == '1')
            {
                trk0 = 0;
            }

            if (trk1 == 0 && st[i] == '1')
            {
                count1++;
                trk1 = 1;
            }
            else if (st[i] == '0')
            {
                trk1 = 0;
            }
        }

        int mn = min(count0, count1);
        cout << mn << endl;
    }

    return 0;
}